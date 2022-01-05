#include <stdio.h>
#include "vm.h"

byte PRG[4096 * 256];
byte RAM[4096 * 8];
byte EXRAM[4096 * 8];

byte prgPage = 1;
byte ramPage = 16;
byte exramPage = 16;