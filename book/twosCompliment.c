#include <stdio.h>
int main() {
 char sc;
 unsigned char uc;
 sc = uc = 0; //00000000
 printf("0 signed: %d\n", sc);
 printf("0 unsigned: %d\n", uc);
 sc = uc = 1; //00000001
 printf("1 signed: %d\n", sc);
 printf("1 unsigned: %d\n", uc);

 sc = uc = 7; //00000111
 printf("7 signed: %d\n", sc);
 printf("7 unsigned: %d\n", uc);

 sc = uc = 126; //01111110
 printf("126 signed: %d\n", sc);
 printf("126 unsigned: %d\n", uc);

 sc = uc = 127; //01111111
 printf("127 signed: %d\n", sc);
 printf("127 unsigned: %d\n", uc);

 sc = uc = 128; //10000000
 printf("128 signed: %d\n", sc);
 printf("128 unsigned: %d\n", uc);

 sc = uc = 255; //11111111
 printf("255 signed: %d\n", sc);
 printf("255 unsigned: %d\n", uc);

 sc = uc = 256; //100000000 *overflow
 printf("256 signed: %d\n", sc);
 printf("256 unsigned: %d\n", uc);

 sc = uc = 260; //100000100 *overflow
 printf("260 signed: %d\n", sc);
 printf("260 unsigned: %d\n", uc);

 sc = uc = -0; //100000000 *overflow
 printf("-0 signed: %d\n", sc);
 printf("-0 unsigned: %d\n", uc);

sc = uc = -1; //11111111
 printf("-1 signed: %d\n", sc);
 printf("-1 unsigned: %d\n", uc);

 sc = uc = -7; //11111001
 printf("-7 signed: %d\n", sc);
 printf("-7 unsigned: %d\n", uc);

 sc = uc = -126; //10000010
 printf("-126 signed: %d\n", sc);
 printf("-126 unsigned: %d\n", uc);
 sc = uc = -127; //10000001
 printf("-127 signed: %d\n", sc);
 printf("-127 unsigned: %d\n", uc);

 sc = uc = -128; //10000000
 printf("-128 signed: %d\n", sc);
 printf("-128 unsigned: %d\n", uc);

 sc = uc = -255; //00000001 *weird eh?
 printf("-255 signed: %d\n", sc);
 printf("-255 unsigned: %d\n", uc);

 sc = uc = -256; //100000000 *overflow
 printf("-256 signed: %d\n", sc);
 printf("-256 unsigned: %d\n", uc);

 sc = uc = -260; //011111100 *overflow
 printf("-260 signed: %d\n", sc);
 printf("-260 unsigned: %d\n", uc);
 short ss;
 unsigned short us;

 ss = us = 255; //0000000011111111
 printf("255 signed short: %d\n", ss);
 printf("255 unsigned short: %d\n", us);

 ss = us = 256; //00000000100000000
 printf("256 signed short: %d\n", ss);
 printf("256 unsigned short: %d\n", us);

 ss = us = 260; //00000000100000100
 printf("260 signed short: %d\n", ss);
 printf("260 unsigned short: %d\n", us);
 ss = us = -255; //1111111100000001
 printf("-255 signed short: %d\n", ss);
 printf("-255 unsigned short: %d\n", us);

 ss = us = -256; //1111111100000000
 printf("-256 signed short: %d\n", ss);
 printf("-256 unsigned short: %d\n", us);

 ss = us = -260; //1111111011111100
 printf("-260 signed short: %d\n", ss);
 printf("-260 unsigned short: %d\n", us);
 return 0;
}