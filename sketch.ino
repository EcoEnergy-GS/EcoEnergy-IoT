#include <ThingerESP32.h>
#include <time.h>
#include <WiFi.h>

// Credenciais do dispositivo no Thinger.io
#define USERNAME "Jixatos"
#define DEVICE_ID "GS-ECOENERGY-ESP32"      
#define DEVICE_CREDENTIAL "q1w2e3r4t5y6u7i8o9p0"

// Credenciais para conexão com wifi pelo Wokwi 
#define SSID "Wokwi-GUEST"
#define SSID_PASSWORD ""

// Definição dos pinos dos potenciômetros
const int PT = 32;
const int PC = 33;

// Configuração do NTP
const char* ntpServer = "pool.ntp.org";  
const long gmtOffset_sec = -3 * 3600;   
const int daylightOffset_sec = 0; 

// Váriaveis do ambiente
float tensao = 0.0;
float corrente = 0.0;
float potencia = 0.0;
String dateTime = "";
int segundos = 1;

ThingerESP32 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);

String getDateTime() {
  time_t now = time(nullptr);  
  struct tm timeinfo;
  localtime_r(&now, &timeinfo);
  
  if (timeinfo.tm_year > 70) {          
    char timeString[26];
    strftime(timeString, sizeof(timeString), "%d/%m/%Y %H:%M:%S", &timeinfo);
    return String(timeString);          
  } else {
    return "Hora não sincronizada";
  }
}

void setup() {
  Serial.begin(115200);

  Serial.print("Conectando ao Wi-Fi");
  WiFi.begin(SSID, SSID_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println(" Conectado!");

  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);

  thing["id"] >> outputValue(DEVICE_ID);
  thing["dataHora"] >> outputValue(dateTime);
  thing["Tensao"] >> outputValue(tensao);
  thing["Corrente"] >> outputValue(corrente);
  thing["Potencia"] >> outputValue(potencia);
}

void loop() {
  dateTime = getDateTime();

  tensao = (analogRead(PT) / 4095.0) * 3.3; 
  corrente = map(analogRead(PC), 0, 4095, 0, 5000) / 1000.0;
  potencia = tensao * corrente;

  Serial.print("Tensão: ");
  Serial.println(tensao);
  Serial.print("Corrente: ");
  Serial.println(corrente);
  Serial.print("Potencia: ");
  Serial.println(potencia);
  Serial.print("Data e hora: ");
  Serial.println(dateTime);

  thing.handle();

  delay(segundos * 1000);
}
