
# Coke Fetching Robot

A robot to help me being a comfortable couch potato!

## Project Overview

### Project Idea 

I'd like to build a moving platform with a lot cool functions (thermal sensor, video camera, ultrasonic sensor.etc) that we learnt this semester	


#### Overview

![Overview](https://github.com/Kunlong1994/IDDFinalProject_2020/blob/main/final.jpg)

## Design Destails

#### Components 

- Arduino
- Motor × 4
- Motor driver × 1
- Motor controller × 1
- Wheels × 4
- Plastic board × 2
- Carboard × 3
- DuPont cable × n
- Bluetooth board × 1
- 8v battery × 2
- battery case × 1
- Ultrasonic sensor × 1
- Infrared sensor × 1
#### Architecture


#### Iterations

- Paper Prototype
![proto](https://github.com/Kunlong1994/IDDFinalProject_2020/blob/main/paperproto.jpg)

![chassis](https://github.com/Kunlong1994/IDDFinalProject_2020/blob/main/chassisdesign.jpg)
The chassis has been changed from paper to plastic to increase the toughness to carry the coke bottle.
- Sensors 

![1](https://github.com/Kunlong1994/IDDFinalProject_2020/blob/main/infrared.jpg)

![2](https://github.com/Kunlong1994/IDDFinalProject_2020/blob/main/tempsensor.jpg)

![3](https://github.com/Kunlong1994/IDDFinalProject_2020/blob/main/ultrasonic.jpg)
The code for temperature sensor is attached, other codes could also be found in the folder. Although they are not integrated into current design, I prepared the code anyway for future upgrade
![4](https://github.com/Kunlong1994/IDDFinalProject_2020/blob/main/tempcode.png)
- Grabing part
The grabing hands are donw by two plastic pieces cutted from the board and screw fixed to the front of the cart, they could hold the coke bottle in position. Also I could change the hand design for other functions, like sweeping the floor.
![hand](https://github.com/Kunlong1994/IDDFinalProject_2020/blob/main/hand.jpg)

- Final Iteration

![4](https://github.com/Kunlong1994/IDDFinalProject_2020/blob/main/Inside.jpg)


## Video Demo
https://github.com/Kunlong1994/IDDFinalProject_2020/blob/main/Movingplat.mp4

https://github.com/Kunlong1994/IDDFinalProject_2020/blob/main/Final%20demo.mp4

## Codes and Files

### Bluetooth


[Arduino Code](https://github.com/Kunlong1994/IDDFinalProject_2020/blob/main/bluetooth/4WD_Bluetooth_control.ino)



### Ultrasonic



[Arduino Code](https://github.com/Kunlong1994/IDDFinalProject_2020/blob/main/4WD_sonar.ino)


## Future Works
- Test more sensors, this stage only incorporate bluetooth because arduino only allows one program at a time and the sensors are not good for fetching purpose. 
- Increase the motor power to carrier heavier payload
- Use stronger chassis material
- Find a way to power raspberry pi and put the camera on












