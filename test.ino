#include <Wire.h>
#include <24LC.h> // https://rcl-radio.ru/wp-content/uploads/2020/03/24LC.zip
 
EEPROM24LC eeprom(0x50);
 
byte data[10]{12,24,48,96,128,12,4,55,68,250};
unsigned int i;
 
void setup(){    
    Serial.begin(9600);
    // write
    for(i=0;i<10;i++){eeprom.writeWire(i,data[i]);}
    // read
    for(i=0;i<10;i++){Serial.print(i);Serial.print("  ");Serial.println(eeprom.readWire(i));}  
} 
 
void loop(){}
