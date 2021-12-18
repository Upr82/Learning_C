#include <stdio.h>
#include <stdint.h>

int main()
{

  union {
    struct{
      uint8_t   byte1;
      uint8_t   byte2;
    };
    uint16_t    word;
  } u1;


  u1.byte1 = 0x21;
  u1.byte2 = 0x43;

  printf("Word is: %#X", u1.word);
  return 0;
}
