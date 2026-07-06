# 🌐 Web Serial Communication with Arduino (SimulIDE)

This project demonstrates the integration between a web interface and an Arduino simulation, allowing the sending of data via a virtual serial port to control components in real time.

## 🚀 How the system works

The project uses a serial communication bridge to connect two distinct environments:

1.  **Web Interface (Left Side):** A website that uses the Web Serial API to connect to port **COM7**. Through it, it is possible to send text commands to the hardware.
2.  **Arduino Simulation (Right Side):** In the **SimulIDE** software, an Arduino Uno is configured on port **COM8**. 
3.  **Virtual Bridge:** Ports COM7 and COM8 are connected through the **com0com** software, creating a communication tunnel.

### ⚙️ Code Logic:
* Upon starting, the simulator display shows the message: `"Aguardando mensagem"`.
* When the character **"V"** is sent by the website, the Arduino processes the information and changes the display to: `"Código recebido"`.

## 🛠️ Technologies and Tools
* **Simulated Hardware:** Arduino Uno on [SimulIDE](https://www.simulide.com/).
* **Communication:** [com0com](http://com0com.sourceforge.net/) (Null-modem emulator).
* **Interface:** HTML/JavaScript (Web Serial API).

## 💻 Simulation Environment
This project was developed and tested virtually, without the need for physical components at the moment.

* **Software:** [SimulIDE](https://www.simulide.com/)
* **Simulated Board:** Arduino Uno
* **Virtual Components:** * LEDs for traffic signaling.
  * Virtual resistors.
  * Simulator connection panel.

## Demonstration:

https://github.com/user-attachments/assets/ff5a3615-4fb0-4643-a618-73123373663f


## 🤖 Credits and Co-creation
This project was developed with the support of Artificial Intelligence tools:
* **Emergent:** Assistance with the structure of instructions and the website.
* **Gemini (Google):** Development of the Arduino code and technical documentation.

---
*Studying the integration between Web development and Robotics.*
