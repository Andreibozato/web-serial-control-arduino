# 🌐 Comunicação Web Serial com Arduino (SimulIDE)

Este projeto demonstra a integração entre uma interface web e uma simulação de Arduino, permitindo o envio de dados via porta serial virtual para controlar componentes em tempo real.

## 🚀 Como o sistema funciona

O projeto utiliza uma ponte de comunicação serial para conectar dois ambientes distintos:

1.  **Interface Web (Lado Esquerdo):** Um site que utiliza a Web Serial API para se conectar à porta **COM7**. Através dele, é possível enviar comandos de texto para o hardware.
2.  **Simulação Arduino (Lado Direito):** No software **SimulIDE**, um Arduino Uno está configurado na porta **COM8**. 
3.  **Ponte Virtual:** As portas COM7 e COM8 estão conectadas através do software **com0com**, criando um túnel de comunicação.

### ⚙️ Lógica do Código:
* Ao iniciar, o display do simulador exibe a mensagem: `"Aguardando mensagem"`.
* Quando o caractere **"V"** é enviado pelo site, o Arduino processa a informação e muda o display para: `"Código recebido"`.

## 🛠️ Tecnologias e Ferramentas
* **Hardware Simulado:** Arduino Uno no [SimulIDE](https://www.simulide.com/).
* **Comunicação:** [com0com](http://com0com.sourceforge.net/) (Null-modem emulator).
* **Interface:** HTML/JavaScript (Web Serial API).

## 💻 Ambiente de Simulação
Este projeto foi desenvolvido e testado de forma virtual, sem a necessidade de componentes físicos no momento.

* **Software:** [SimulIDE](https://www.simulide.com/)
* **Placa Simulada:** Arduino Uno
* **Componentes Virtuais:** 
  * LEDs para sinalização de tráfego.
  * Resistores virtuais.
  * Painel de conexões do simulador.

## 🤖 Créditos e Co-criação
Este projeto foi desenvolvido com o apoio de ferramentas de Inteligência Artificial:
* **Emergent:** Auxílio na estrutura das instruções e site.
* **Gemini (Google):** Desenvolvimento do código do Arduino e documentação técnica.

---
*Estudando a integração entre desenvolvimento Web e Robótica.*
