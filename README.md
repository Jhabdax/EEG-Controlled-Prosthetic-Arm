# EEG-Controlled-Prosthetic-Arm

This arm project is based on inmoov.fr arm design. It lets you control the hand using the EEG signals aquired by the neurosky EEG sensor. 

There are basically 2 parts of the code one which runs inside the arduino microcontroller and the other which runs on the processing ide on your laptop or raspberry pi. 

The concept is very simple the arduino code is used to control the servo motors attached to the arm. eg: H is for close and L is for open (case sensitive) via serial monitor.

what the processing code does is also simple it basically senses the atention level of the neurosky if the attention reaches beyond a certain point it sends H and L to the arduino through the serial monitor which then makes the servos rotate and opens or closes the arm.

This code is for Mac OS so accordingly you will have to edit the serial ports if you are using windows or mac. there are many easy tutorials on the internet which show how you can find the serial port name
