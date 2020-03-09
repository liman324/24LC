//  Alexander Liman
//  liman324@yandex.ru
//  rcl-radio.ru

// I2C EEPROM 24LC256 32 kb
// I2C EEPROM 24LC128 16 kb

#ifndef  EEPROM24LC_H
#define  EEPROM24LC_H

#include <Arduino.h>

class EEPROM24LC
  {
    public:
       EEPROM24LC(byte);
       void writeWire(uint16_t num, byte data);
       byte readWire(uint16_t num);
    private:
       int ADDR;
  };
#endif
