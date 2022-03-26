#include <stdint.h>
#include <stdio.h>

/**
 * Little Endian allows us to read the same address as if it was a number of 
 * 8 bit, 16 bit, 32 bit, or a 64 bit value, without having to change the address.
 **/

union AllInOne {
  uint8_t u8; 
  uint16_t u16; 
  uint32_t u32; 
  uint64_t u64;
};

int main() {
 union AllInOne u = { .u64 = 0x2A };
 puts(u.u8 == u.u16 && u.u8 == u.u32 && u.u8 == u.u64 ? "true" : "false");
}