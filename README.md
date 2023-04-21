# ArduinoProjects

[Introdução](#introdução)

[Motor com reversão](#motor-com-reversão)

[LCD Game](#lcd-game)

[Controlador de nivel](#controlador-de-nivel)

[Porta de segurança](#porta-de-segurança)

# introdução

![arduino](https://user-images.githubusercontent.com/96671069/233725908-55f8ea45-29dc-433b-97fd-c7a07d1633d3.png)

Olá! Este é o repositório onde você encontrará todos os projetos que desenvolvi utilizando a plataforma Arduino. Aqui você encontrará desde projetos simples até projetos mais complexos que envolvem sensores, displays, comunicação sem fio, entre outras coisas. Espero que esses projetos possam ser úteis para você em seus próprios projetos ou apenas para inspirá-lo em novas ideias. Sinta-se à vontade para explorar e deixar sugestões ou dúvidas nos comentários dos projetos. Obrigado por visitar e espero que aproveite!

# Motor com reversão 

<div>
  <table>
    <tr>
      <td>
        <h2>Lista de Componentes</h2>
        <table>
          <thead>
            <tr>
              <th>Nome</th>
              <th>Quantidade</th>
              <th>Componente</th>
            </tr>
          </thead>
          <tbody>
            <tr>
              <td>U3</td>
              <td>1</td>
              <td>LCD 16 x 2</td>
            </tr>
            <tr>
              <td>Rpot1</td>
              <td>1</td>
              <td>5 Ω Potenciômetro</td>
            </tr>
            <tr>
              <td>R1</td>
              <td>1</td>
              <td>220 Ω Resistor</td>
            </tr>
            <tr>
              <td>U4</td>
              <td>1</td>
              <td>Arduino Uno R3</td>
            </tr>
            <tr>
              <td>S1</td>
              <td>1</td>
              <td>Botão</td>
            </tr>
            <tr>
              <td>S2</td>
              <td>1</td>
              <td>Botão</td>
            </tr>
            <tr>
              <td>R2</td>
              <td>1</td>
              <td>10 kΩ Resistor</td>
            </tr>
            <tr>
              <td>R3</td>
              <td>1</td>
              <td>10 kΩ Resistor</td>
            </tr>
            <tr>
              <td>M1</td>
              <td>1</td>
              <td>Motor CC</td>
            </tr>
            <tr>
              <td>D1</td>
              <td>1</td>
              <td>LED RGB</td>
            </tr>
            <tr>
              <td>R4</td>
              <td>1</td>
              <td>200 Ω Resistor</td>
            </tr>
            <tr>
              <td>R5</td>
              <td>1</td>
              <td>200 Ω Resistor</td>
            </tr>
            <tr>
              <td>R6</td>
              <td>1</td>
              <td>200 Ω Resistor</td>
            </tr>
            <tr>
              <td>K1</td>
              <td>1</td>
              <td>Relé SPDT</td>
            </tr>
          </tbody>
        </table>
      </td>
      <td>
        <img src="https://user-images.githubusercontent.com/96671069/233718488-5e87ef36-ad18-4db9-ad52-443b6143d30a.png" alt="Motor CC com reversão LCD LED RGB Arduino 2" width="400">
        <img src="https://user-images.githubusercontent.com/96671069/233718493-cbfff03c-0460-4941-9574-a28fd449555b.png" alt="Motor CC com reversão LCD LED RGB Arduino 1" width="400">
      </td>
    </tr>
  </table>
</div>

Este é um projeto de controle de motor com reversão utilizando Arduino, relés e botões. Com esse projeto, você pode controlar um motor de maneira simples e segura, evitando danos ao equipamento e reduzindo o risco de acidentes. O controle é realizado por meio de botões que permitem acionar o motor em ambas as direções e também interromper o funcionamento. A utilização de relés aumenta a segurança do projeto, garantindo que o motor seja desligado em caso de falha ou emergência. Com algumas adaptações, esse projeto pode ser facilmente integrado a outras aplicações que requerem o controle de motores.
  

# LCD game
<table>
  <tr>
    <td>
      <img src="https://user-images.githubusercontent.com/96671069/233717993-77025257-3a40-4d11-adca-1412a149eb2f.png" alt="LCD GAME save yourself from the imposter" width="400">
    </td>
    <td>
      <h2>Lista de Componentes</h2>
      <table>
        <thead>
          <tr>
            <th>Nome</th>
            <th>Quantidade</th>
            <th>Componente</th>
          </tr>
        </thead>
        <tbody>
          <tr>
            <td>U2</td>
            <td>1</td>
            <td>LCD 16 x 2</td>
          </tr>
          <tr>
            <td>U1</td>
            <td>1</td>
            <td>Arduino Uno R3</td>
          </tr>
          <tr>
            <td>R1</td>
            <td>1</td>
            <td>200 Ω Resistor</td>
          </tr>
          <tr>
            <td>Rpot2</td>
            <td>1</td>
            <td>5 Ω Potenciômetro</td>
          </tr>
          <tr>
            <td>S1</td>
            <td>1</td>
            <td>Botão</td>
          </tr>
          <tr>
            <td>R2</td>
            <td>1</td>
            <td>200 kΩ Resistor</td>
          </tr>
        </tbody>
      </table>
    </td>
  </tr>
</table>

O jogo "Among Us: Escape from the Impostor" é um divertido jogo de sobrevivência criado com um Arduino Uno e um LCD 16x2. O jogador controla um personagem de Among Us que deve escapar do Impostor e sobreviver o máximo de tempo possível. O jogo apresenta obstáculos em forma de plataformas, e o jogador deve alternar entre as plataformas alta e baixa para evitar colidir com o obstáculo e perder o jogo. O objetivo é acumular a maior pontuação possível, que é baseada no tempo de sobrevivência. O jogo é controlado por um único botão que alterna entre as plataformas. É um ótimo projeto para iniciantes em eletrônica e programação, além de ser uma forma divertida de passar o tempo.

# Controlador de nivel
<table>
  <tr>
    <td>
      <img align="right" width="300" src="https://user-images.githubusercontent.com/96671069/233721123-c1fd8de7-4196-45f5-a95b-b8caf8abf91c.png">
    </td>
    <td>
      <h2>Lista de Componentes</h2>
      <table>
        <thead>
          <tr>
            <th>Nome</th>
            <th>Quantidade</th>
            <th>Componente</th>
          </tr>
        </thead>
        <tbody>
          <tr>
            <td>U1</td>
            <td>1</td>
            <td>"Arduino Uno R3"</td>
          </tr>
          <tr>
            <td>D1</td>
            <td>1</td>
            <td>"Branco LED"</td>
          </tr>
          <tr>
            <td>R1, R2, R3, R4, R5</td>
            <td>5</td>
            <td>"200 Ω Resistor"</td>
          </tr>
          <tr>
            <td>D2</td>
            <td>1</td>
            <td>"Azul LED"</td>
          </tr>
          <tr>
            <td>D3</td>
            <td>1</td>
            <td>"Verde LED"</td>
          </tr>
          <tr>
            <td>D4</td>
            <td>1</td>
            <td>"Amarelo LED"</td>
          </tr>
          <tr>
            <td>D5</td>
            <td>1</td>
            <td>"Vermelho LED"</td>
          </tr>
          <tr>
            <td>Rpot1, Rpot2</td>
            <td>2</td>
            <td>"250 kΩ Potenciômetro"</td>
          </tr>
          <tr>
            <td>U2</td>
            <td>1</td>
            <td>"LCD 16 x 2"</td>
          </tr>
          <tr>
            <td>R6</td>
            <td>1</td>
            <td>"220 Ω Resistor"</td>
          </tr>
        </tbody>
      </table>
    </td>
  </tr>
</table>

O controlador de nível é um projeto interessante que consiste na simulação de um sensor analógico. Com um display LCD, é possível monitorar o nível em tempo real, e de acordo com o nível, diferentes LEDs são acesos, simbolizando diferentes reações. O projeto pode ser utilizado em diversas situações que necessitam do controle de nível, como em reservatórios de água, tanques de combustível, e outras aplicações. Com o controlador de nível, é possível manter o controle e monitoramento do nível de forma precisa e eficiente. O projeto é simples e pode ser implementado com poucos componentes, tornando-se uma excelente opção para quem busca um projeto desafiador e útil ao mesmo tempo.

# Porta de segurança
<table>
  <tr>
    <td>
      <img src="https://user-images.githubusercontent.com/96671069/233722252-7ce4e2c2-70a5-4ebb-b3ba-dfc38a2ca9a1.png" alt="Porta de segurança" width="400">
    </td>
    <td>
      <h2>Lista de Componentes</h2>
      <table>
        <thead>
          <tr>
            <th>Nome</th>
            <th>Quantidade</th>
            <th>Componente</th>
          </tr>
        </thead>
        <tbody>
          <tr>
            <td>U1</td>
            <td>1</td>
            <td>Arduino Uno R3</td>
          </tr>
          <tr>
            <td>U2</td>
            <td>1</td>
            <td>Baseado em MCP23008, 32 LCD 16 x 2 (I2C)</td>
          </tr>
          <tr>
            <td>KEYPAD1</td>
            <td>1</td>
            <td>Teclado 4x4</td>
          </tr>
          <tr>
            <td>D1</td>
            <td>1</td>
            <td>LED RGB</td>
          </tr>
        </tbody>
      </table>
    </td>
  </tr>
</table>

O controlador de porta de segurança é um projeto de Arduino que utiliza um teclado 4x4 e um LCD para controlar o acesso a um ambiente. A porta só pode ser aberta se a senha correta for inserida. A senha padrão pode ser alterada após a abertura da porta e um LED RGB é utilizado para indicar o status da porta. O projeto é uma solução simples e eficaz para manter a segurança de ambientes restritos.

