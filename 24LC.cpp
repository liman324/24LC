#include <24LC.h>
#include <Wire.h>

EEPROM24LC::EEPROM24LC(byte addr){ 
        ADDR = addr;
        Wire.begin();   
};

void EEPROM24LC::writeWire(uint16_t num, byte data){
        Wire.beginTransmission(ADDR);
        Wire.write(num >> 8); 
        Wire.write(num & 0xFF);
        Wire.write(data); 
        Wire.endTransmission();
        delay(5);
}

byte EEPROM24LC::readWire(uint16_t num){
        Wire.beginTransmission(ADDR); 
        Wire.write(num >> 8); 
        Wire.write(num & 0xFF); 
        Wire.endTransmission();

        Wire.beginTransmission(ADDR);
        Wire.requestFrom(ADDR,1); 
        byte value = Wire.read();
        delay(1);
        return value;
}
