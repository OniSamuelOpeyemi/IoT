# 💧 Smart Water Level Detection System using Arduino Uno #

In many homes and small businesses across Lagos, water tanks **often overflow due to a lack of real-time monitoring.** This leads to water wastage, increased electricity costs from over-pumping, and unnecessary maintenance expenses. In most cases, there is no automatic indicator to alert homeowners when the tank is full or nearly empty. Manual supervision is unreliable, especially when power is intermittent or when people forget to switch off the pumping machine on time.
----
The problem, therefore, is the absence of an **affordable**, **automated system** that can detect water levels and alert users before overflow occurs. This project aims to solve that issue using a simple yet effective microcontroller-based design.

----
## Proposed Solution ##

The proposed solution is an Arduino-based Smart Water Level Detection System that uses an ultrasonic sensor (HC-SR04) to measure the distance between the water surface and the top of the tank. The sensor sends a signal to the Arduino Uno, which processes the data and determines the water level. When the water reaches a defined maximum level (for instance, less than 10 cm from the sensor), an LED turns ON to indicate that the tank is full.

This system can also be extended with a buzzer or Wi-Fi module (ESP8266) in the future to send mobile notifications, but for the proof of concept, the LED will act as the visual indicator of water level status.

_Wokwi System Diagram_

- Components:

    Arduino Uno

    Ultrasonic Sensor (HC-SR04)

    LED (as indicator)

    Breadboard and jumper wires

- Connections:

    HC-SR04 Trigger Pin → Digital Pin 9

    HC-SR04 Echo Pin → Digital Pin 10

    VCC → 5V, GND → GND

    LED Positive → Digital Pin 13 (through a resistor)

    LED Negative → GND

- Software Specifications

    Programming Language: C++ (Arduino IDE compatible)

- Algorithm Description:

    The Arduino sends a pulse through the Trigger pin of the ultrasonic sensor.

    The Echo pin receives the signal reflected by the water surface.

    The duration of the echo is used to calculate the distance between the sensor and the water.

If the distance is below a set threshold (e.g., 10 cm), the LED turns ON, signaling “Tank Full.”

Otherwise, the LED remains OFF.