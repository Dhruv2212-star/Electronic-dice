# Electronic Dice
Tired of Board game tactics and cheating???? 
**I present an ELECTRONIC dice**  
A small 30mm x  30mm module which has 6 LEDs. when u press a button it changes LEDs quickly and random leds turn on from 1-6.  

# How to use?? 
It's simple enough for a todler to use ! just press a button and you get a random no. of LEDs!  
**Final assembly image**  

<img width="467" height="439" alt="Assembly" src="https://github.com/user-attachments/assets/876747e2-3342-4202-a920-c02457fd08e3" />

*You know what else is cool??*
the PCB, it uses minimal components at surface to keep it super clean!  

<img width="607" height="558" alt="PCB 3d model image" src="https://github.com/user-attachments/assets/2184d6ed-1299-4975-b1d2-367802754097" />

# Firmware Flashing
connect your debugger probe to the J2 port accordingly for this first.  
Our Pinc connections on PCB  

| J2 pin | Signal | ATtiny84A |  
| -----: | ------ | --------- |  
|      1 | VCC    | U1 pin 1  |  
|      2 | GND    | U1 pin 14 |    
|      3 | MOSI   | PB0       |  
|      4 | MISO   | PB1       |    
|      5 | SCK    | PB2       |    
|      6 | RESET  | PB3       |  

**Install Arduino IDE**  
then,  
File-> prefrences  
-additional board manager URLs  
--https://drazzy.com/package_drazzy.com_index.json  
Tools->Boards->Board manager  
install "ATTinyCore"  

Select our board by: Tools-> Board-> ATTinny84a  
then set:  
| Arduino setting | Value              |  
| --------------- | ------------------ |  
| Chip            | **ATtiny84A**      |  
| Clock           | **1 MHz internal** |  
| B.O.D.          | **Disabled**       |  
| EEPROM          | **Retained**       |  
| Programmer      | **USBasp**         |  

**Connect USBasp**  
(power the pcb off first)  
connect: USBasp -> J2  
**Burn the config**  
**Upload dice firmware**  

# That's it !! 




