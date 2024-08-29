## ESP32 - HY-SRF05 Ultrasonic Range Finder

In this project, we will build a simple range finder using the HY-SRF05 ultrasonic sensor. This sensor can be used to measure the distance between the module and an object placed in front of it.

The HY-SRF05 operates using ultrasonic sound waves. These waves are emitted by the sensor, and when they hit an object, they are reflected back to the sensor. By measuring the time it takes for the sound waves to be transmitted and then received, we can calculate the distance the sound waves traveled, and therefore, the distance to the object.

### Components
- HY-SRF05 Ultrasonic Range Finder ([buy here](https://hobby-circuit.com/products/hy-srf05-ultrasonic-range-finder?keyword=HY-))
- ESP32 ([buy here](https://hobby-circuit.com/products/esp32-wroom-32-esp32-s-development-board-wifi-bluetooth-compatible-type-c-esp32-30pin-esp32-nodemcu-development-module?keyword=ESP32))
- 1.3 inch OLED i2C ([buy here](https://hobby-circuit.com/products/1-3-oled-display-module-white-blue-color-drive-chip-sh1106-128x64-1-3-inch?keyword=1.3%20inch))
- Jumper Wires ([buy here](https://hobby-circuit.com/products/40pcs-10cm-cables-m-m-jumper-breadboard-wire-colorful-gpio-ribbon-for-diy-kit?keyword=M-m))
- Breadboard ([buy here](https://hobby-circuit.com/products/830-point-solderless-pcb-bread-board-jumper?keyword=breadboard%205))
  
Buy Component Bundle ([buy here](https://hobby-circuit.com/products/hy-srf05-ultrasonic-range-finder-bundle))

### Schematic
![HY-SRF05 Ultrasonic Range Finder Schematic](https://cdn.shopify.com/s/files/1/0846/7654/2732/files/ESP32_HY-SRF05_Ultrasonic_Range_Finder.png?v=1724924963)

The HY-SRF05 is a popular ultrasonic distance sensor used in many electronics and robotics projects. It’s designed to measure distances by emitting an ultrasonic pulse and then listening for the echo that returns after bouncing off an object. This process is often referred to as "time-of-flight" measurement.

### Key Features of the HY-SRF05:
- Operating Voltage: Typically 5V, making it compatible with most microcontrollers.
- Measuring Range: The sensor can detect objects within a range of approximately 2 cm to 400 cm (0.8 inches to 13 feet).
- Precision: It offers a measuring accuracy of around 3 mm, which is sufficient for most general-purpose distance measurement applications.
- Trigger and Echo Pins: The sensor has two main pins used for operation:
- Trigger Pin: When this pin receives a HIGH signal for a minimum of 10 microseconds, the sensor emits an ultrasonic burst of 40 kHz.
- Echo Pin: This pin goes HIGH to indicate that the sensor is listening for the echo. The duration for which this pin stays HIGH corresponds to the time it took for the sound to travel to the object and back.

### How It Works:
Emission of Ultrasonic Pulse: When the trigger pin is activated, the HY-SRF05 sends out a burst of ultrasonic sound waves at a frequency of 40 kHz. These waves travel through the air until they hit an object.
Echo Reception: Once the sound waves hit an object, they bounce back toward the sensor. The sensor detects these returning waves through the echo pin.
Time Measurement: The time between the emission of the sound waves and their reception is recorded. This time interval, typically measured in microseconds, is directly proportional to the distance the waves traveled.
Distance Calculation: The speed of sound in air (approximately 343 meters per second at room temperature) is used to calculate the distance. The formula for calculating the distance to the object is:
Distance =  (Time / 2) ​× Speed of Sound. The division by 2 accounts for the fact that the sound wave travels to the object and back, covering twice the distance between the sensor and the object.
Applications of the HY-SRF05

### The HY-SRF05 is widely used in various applications, including:
- Obstacle Detection: In robotics, it helps autonomous robots avoid collisions by detecting nearby objects.
- Level Measurement: It can measure the level of liquids in a tank by detecting the distance from the sensor to the liquid surface.
- Security Systems: It can be used in motion detection systems to trigger alarms when an object is detected within a certain range.
- Automatic Parking Systems: In vehicles, it assists in parking by detecting the distance to obstacles behind or in front of the car.

### Conclusion
The HY-SRF05 ultrasonic sensor is a versatile and easy-to-use component that makes distance measurement simple and effective. Its reliance on ultrasonic sound waves allows for accurate, non-contact measurement, making it an essential tool in various fields from robotics to automotive applications. Understanding how this sensor works opens up a wide range of possibilities for integrating it into projects that require precise distance detection.

