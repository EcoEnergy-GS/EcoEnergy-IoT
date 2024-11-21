
# EcoEnergy

O projeto EcoEnergy foi desenvolvido para oferecer uma solução acessível e eficiente de monitoramento de consumo de energia elétrica em residências e estabelecimentos comerciais. Ele combina tecnologia IoT com funcionalidades que incentivam a economia de energia. Os usuários podem monitorar o consumo em tempo real, acessar relatórios detalhados por meio de um aplicativo ou website e participar de um sistema de recompensas baseado na economia gerada. O objetivo é promover a conscientização energética, ajudando a reduzir custos e a contribuir para um consumo mais sustentável.

O coração do EcoEnergy é um dispositivo IoT projetado para monitorar o consumo de energia em tempo real. Ele mede variáveis elétricas, como tensão e corrente, e calcula o consumo energético de forma precisa. Esses dados são  são processados e armazenados em um banco de dados. A conectividade do dispositivo permite integração com a internet, garantindo que os usuários possam acessar as informações em qualquer lugar, utilizando o aplicativo ou o website do projeto. O dispositivo é fácil de instalar e ideal tanto para uso residencial quanto comercial, proporcionando aos usuários uma visão clara de seus hábitos de consumo e incentivando a economia energética.



## Documentação

Link do repositório com a documentação do projeto:

[Documentação](https://github.com/EcoEnergy-GS/Documents.git)
[Vídeo](https://youtu.be/wmGusNWIzDQ)


## Passos para Executar o Projeto

1. **Acesse o ambiente de teste do dispositivo:**  
   Clique no link abaixo para abrir o simulador do dispositivo no Wokwi:  
   [Simulador Wokwi](https://wokwi.com/projects/414904212646972417)  

2. **Configure o dispositivo no Thinger.io:**  
   - Acesse sua conta no [Thinger.io](https://thinger.io).  
   - Crie um novo dispositivo e insira as seguintes informações nos campos correspondentes:  
     ```
     Device ID = GS-ECOENERGY-ESP32  
     Device Credentials = q1w2e3r4t5y6u7i8o9p0  
     ```  

3. **Atualize o código com seu nome de usuário do Thinger.io:**  
   - No código do projeto, localize a seguinte linha:  
     ```cpp
     #define USERNAME "SEU USERNAME do thinger.io"
     ```  
   - Substitua `"SEU USERNAME do thinger.io"` pelo nome de usuário da sua conta.  

4. **Crie um Dashboard personalizado (opcional):**  
   - No Thinger.io, crie um dashboard vinculado ao dispositivo configurado.  
   - Adicione widgets e personalize o layout conforme suas preferências para monitorar os dados do dispositivo.  

5. **Acompanhe os dados do dispositivo:**  
   - Para visualizar os valores no Thinger.io, utilize o dashboard criado.  
   - Caso prefira, os valores também podem ser monitorados diretamente pelo **Monitor Serial** da aplicação no simulador Wokwi.
## Autores 
Alunos da Faculdade de Informática e Administração Paulista (FIAP) turma 2TDSPF.

- [@Jixatos](https://github.com/Jixatos) RM551408
- [@IsabellajFerreira](https://github.com/IsabellajFerreira) RM552329
- [@gutolive09](https://github.com/gutolive09) RM550548
- [@Mmateus106](https://github.com/Mmateus106) RM98524
- [@gabrielrodri33](https://github.com/gabrielrodri33) RM98626

