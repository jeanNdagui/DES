#include <stdio.h>
#include <stdlib.h>

#define LSB64 0x0000000000000001
#define LSB32 0x00000001
#define LSB48 0x000000000001
#define LSB6 0x01
#define LSB4 0x1

char *representationIn64Bits(u_int64_t x);
char *representationIn32Bits(u_int32_t x);
char *representationIn48Bits(u_int64_t x);
char *representationIn6Bits(u_int8_t x);
char *representationIn4Bits(u_int8_t x);