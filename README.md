# Digispark Guide



Download Arduino Studio: https://www.arduino.cc/en/software


Preferences > Additional Boards Manager URL (copy and paste following url here) > http://digistump.com/package_digistump_index.json

Go to the “Tools” menu and then the “Board” submenu - select “Boards Manager” and then from the type drop down select “Contributed”:
Select the “Digistump AVR Boards” package and click the “Install” button.
From the Tools menu select Board→Digispark (Default - 16.5Mhz)

Driver Download: https://github.com/digistump/DigistumpArduino/releases/download/1.6.7/Digistump.Drivers.zip
(Will need admin privs to run.)

<img width="589" alt="image" src="https://user-images.githubusercontent.com/62196284/165770516-b6c83da9-4657-4958-a5d4-3b5885e9438b.png">



Check in Device Manager: View > Show hidden devices > libusb-win32 Usb Devices > Digispark Bootloader

![image](https://user-images.githubusercontent.com/62196284/157080513-73075a00-a946-467d-b85c-509dfded339e.png)

![image](https://user-images.githubusercontent.com/62196284/157080654-c5ca2f14-f292-4090-8485-13af84be6cbf.png)



Programming the device can be done by clicking Sketch > Upload:

![image](https://user-images.githubusercontent.com/62196284/157079848-d4fb7e8a-fa30-4987-8a2d-1da1de34e652.png)

The IDE will ask you to plug in the device this is what a normal successful upload will look like:

<img width="454" alt="image" src="https://user-images.githubusercontent.com/62196284/157080189-f2be6c31-438e-4d86-a760-4fdea85e861d.png">

If you wish to re-program you can follow the same steps.


Included in this repo is a digikeyboard.h file. The standard file does not include mappings to things like TAB and Arrow keys.

C:\Users\%USER%\AppData\Local\Arduino15\packages\digistump\hardware\avr\1.6.7\libraries\DigisparkKeyboard

![image](https://user-images.githubusercontent.com/62196284/157084445-e9f8c794-c4f6-482e-8e7b-40f2f1aff6cd.png)


Please replace this file with file located in this directory with the repo's version.
