#include <Wire.h>
#include <24LC.h>

EEPROM24LC eeprom(0x50);

byte data[20]{122,0,48,96,128,12,4,55,68,250,22,34,56,23,56,78,123,45,122,34};
unsigned int i;

void setup(){    
    Serial.begin(9600);
    // write
    eeprom.writeWire64(20,data,20);// начальный адрес, массив, длина массива
    // read
    for(i=20;i<40;i++){
      Serial.print("Адрес: ");
      Serial.print(i);
      Serial.print("    byte: ");
      Serial.println(eeprom.readWire(i));
      }  
} 
 
void loop(){}
