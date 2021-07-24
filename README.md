
# Water Level Controller using 8051 Microcontroller

Water level controller using 8051 Microcontroller project will help in automatically controlling the water motor by sensing the water level in a tank. This system monitors the water level of the tank and switches ON the motor whenever tank is empty.The motor is swtched OFF when the overhead tank or container is FULL. Here,the water level is indicated on LCD.

We are designing the circuit which is used to detect and control the water level automatically using 8051 microcontroller. 

*CIRCUIT PRINCIPLE:
This system maily works on a principle that "water conducts electricity".the four wires which are dipped into the tank will indicate the different water levels.based on the outputs of these wires,microcontroller displays water level on LCD as well as controls the motor. 
## Components required for water level controller 
AT89C51 Microcontroller

8051 Programmer(programming board)

11.0592 MHz Quartz Crystal


2 x 33pF Capacitor

2 x 10KΩ Resistor (1/4 Watt)


10µF Capacitor

Push Button

1KΩ x 8 Resistor Pack (for Pull – up)

16 x 2 LCD Display

5V Relay

4 x 2N2222 (NPN) Transistors

DC Motor (for demonstration)

10KΩ Potentiometer

1N4007 PN Junction Diode

Programming cable

Connecting wires

Power Supply

Buzzer

Keil µVision IDE

Willar Software (for burning code)

Proteus (for circuit diagram)

## DESIGN CIRCUIT 
The heart of the Water Level Controller using 8051 Microcontroller project is the AT89C51 Microcontroller. The water level probes are connected to the P0.0, P0.1 and P0.2 through the transistors (they are connected to the base of the transistors through corresponding current limiting resistors). P0.0 for LOW level, P0.1 for HALF Level and P0.2 for HIGH Level.

The Collector terminals of the Transistors are connected to VCC and the Emitter terminals are connected to PORT0 terminals (P0.0, P0.1 and P0.2).

PORT1 of the microcontroller is connected to the data pins of LCD and the control pins RS, RW and EN of the LCD Display are connected to the P3.6, GND and P3.7 respectively.

For demonstration purpose, we have used a simple DC Motor Pump. It is connected to the Relay and the input to the relay is fed from P0.7 through a transistor.






## Screenshots

![App Screenshot](https://via.placeholder.com/468x300?text=App+Screenshot+Here)


## Demo

Insert gif or link to demo

  