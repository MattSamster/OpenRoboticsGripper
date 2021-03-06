# Resources I used to learn about arduino, IR sensors, distance calculation and C++
This documentation contains information and resources about IR sensors, distance conversion and calculation methods, useful and educational links.


## Useful links
How does IR work, and how to use it with Arduino: https://www.makerguides.com/sharp-gp2y0a710k0f-ir-distance-sensor-arduino-tutorial/

SharpIR Library for conversion: https://github.com/guillaume-rico/SharpIR

How to select the right distance sensors: https://www.seeedstudio.com/blog/2019/12/23/distance-sensors-types-and-selection-guide/

Candidates were found on this website: http://global.sharp/products/device/lineup/selection/opto/haca/diagram.html

## What are distance Sensors?
As their name suggests, distance sensors are used for determining the distance of an object from another object or obstacle without any physical contact involved. A distance sensor commonly functions by outputting a signal and measuring the change in the returning signal.

Changes measured can be in the form of:
  - time it takes for a signal to return
  - intensity of a returned signal
  - phase change of the returned singal

## IR Distance Sensors
Infrared sensors sense distance or proximity through emitting IR wave and calculating the angle of reflection back into the position sensitive detector.

Below is an illustration of how IR distance sensors work through triangularization:
![xd](https://user-images.githubusercontent.com/56273897/127240327-10ab4f28-1a6b-4729-a5bc-1895b2746fdd.jpeg)


1. Infrared light is emitted from the IR LED emitter
2. The beam of light hits the object (P1) and is reflected off a certain angle
3. The reflected light will reach the PSD (U1)
4. The sensor in the PSD will then determine the position/distance of the reflective object


## Candidates

1.  SHARP GP2Y0A51SK0F IR distance sensor; $17: https://www.digikey.ca/en/products/detail/sharp-socle-technology/GP2Y0A51SK0F/4103863?s=N4IgTCBcDaIOIAUwE0AMBBArARgMoGlUAxEAXQF8g
    - distance measuring range: 2cm to 15cm. IN STOCK

2.  SHARP GP2Y0AF15X IR distance sensor; $20: https://www.digikey.ca/en/products/detail/sharp-socle-technology/GP2Y0AF15X/9741635
    - distance measuring range: 1.5cm to 15cm. OUT OF STOCK


## Selected IR sensor
SHARP GP2Y0A51SK0F IR distance sensor; $17: https://www.digikey.ca/en/products/detail/sharp-socle-technology/GP2Y0A51SK0F/4103863?s=N4IgTCBcDaIOIAUwE0AMBBArARgMoGlUAxEAXQF8g
    - distance measuring range: 2cm to 15cm.


What to work on now 
- find out if there is a library to do distance conversion
- find out sample codes with arduino
- all else, convert a library from another model into this one

## Distance conversion, distance interpolation
To find the distance conversion function for this particular model, Inverse Distance Weighting (IDW) method was used to interpolate a linear function. More information can be found here: https://en.wikipedia.org/wiki/Inverse_distance_weighting#:~:text=Inverse%20distance%20weighting%20(IDW)%20is,available%20at%20the%20known%20points.
![interpolatin](https://user-images.githubusercontent.com/56273897/128103946-609751a9-6b50-488b-8c35-2678655c96ad.PNG) Points used for interpolation



Current IDW formula for the sensor: voltage = 4.88*distance + 0.00833 OR distance = (voltage - 0.0833) / 4.88
 - Reference: https://www.makerguides.com/sharp-gp2y0a710k0f-ir-distance-sensor-arduino-tutorial/
 - Data Sheet: https://global.sharp/products/device/lineup/data/pdf/datasheet/gp2y0a51sk_e.pdf
 - Data sheet for another model. Helpful for interpolation: https://global.sharp/products/device/lineup/data/pdf/datasheet/gp2y0a41sk_e.pdf
