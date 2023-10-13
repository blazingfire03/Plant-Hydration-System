# Plant-Hydration-System:
The Robotics-Based Plant Hydration System seeks to revolutionize plant care by leveraging the capabilities of robotics, automation, and artificial intelligence (AI). This system aims to provide precise and adaptive plant hydration, tailored to the unique needs of each plant, while minimizing water wastage and human intervention. By utilizing cutting-edge technologies such as sensors, actuators, and machine learning algorithms, this system has the potential to redefine how we care for our plants, whether they are in our homes, offices, or vast agricultural fields.


STEPS:





STEP-1
The water content in surrounding air and materials such as soil is an important factor for the well-being of humans, animals, plants, and other living things. The term moisture generally refers to the water content of any material. It is applied to liquids and solids, whereas humidity refers to the water vapor content in gases.
This soil moisture sensor in our kit has two probes to pass current through the soil. It measures the resistance and represents the change in resistance as moisture level. More water makes the soil conduct electricity more easily (less resistance), while dry soil conducts electricity poorly (more resistance). This sensor will be helpful as a reminder to water your indoor plants or to monitor the soil moisture in your garden.




STEP-2
A relay is basically an electrically actuated switch. Many sensors are incredibly sensitive and which may produce only small electric currents. When we need to use them in circuits involving larger currents, that's when relays bridge the gap; A relay makes it possible for small currents to activate larger ones, and to safely do so. 

In this guide, the relay is used to turn the submersible water pump on and off.




STEP-3
Without further ado, let's get started with connecting up the components. First, connect VCC on the relay to 5V pin on Arduino
Connect GND on the relay to negative power rail of breadboard.
Connect IN on relay to Pin 3 on Arduino.



STEP-4
Connect the '-' black wire from battery pack to the negative power rail on the breadboard
Connect to the battery.
Next, connect the black wire of pump to negative power rail.





STEP-5

Connect two F-F jumper wires from the soil moisture sensor probe to the comparison module included in the kit.
Connect a F-M jumper wire from AO on the module to A0 on Arduino.
Connect a F-M jumper wire from GND on the module to GND on Arduino.
Connect a F-M jumper wire from VCC on the module to 3.3V on the Arduino.
Connect red wire of pump to NC.
Connect the '+' red wire from battery holder to COM on the relay.





OUTPUT
![image](https://github.com/blazingfire03/Plant-Hydration-System/assets/99821502/5cc68fe2-fa9b-45a7-88cc-7d6116403a7d)



![Circuit](https://github.com/blazingfire03/Plant-Hydration-System/assets/99821502/c4bcf5a0-c726-4f06-93ca-b3d02c2db52c)



CODE:

Sensor Calibration:
![Calibration Code](https://github.com/blazingfire03/Plant-Hydration-System/assets/99821502/69453d35-4f27-436d-90e5-a45c192e8eab)

Hydration System:
![Hydration code](https://github.com/blazingfire03/Plant-Hydration-System/assets/99821502/b8f89b82-cab1-4c88-b146-1e26c800722d)













