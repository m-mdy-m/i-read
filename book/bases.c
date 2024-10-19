#include <stdio.h>
int main(){
    unsigned char dec = 27; // = (2*10) + 7 = 27
    unsigned char oct = 027; // = (2*8) + 7 = 23
    unsigned char hex = 0xbf; // = (11*16) + 15 = 191
    unsigned int hex2 = 0xbad; // = (11*256) + (10*16) + 13 = 2989
    unsigned char bin = 0b00111100; // = (32 + 16 + 8 + 4) = 60
    printf("%d %d %d %d %d\n", dec, oct, hex, hex2, bin);
    return 0;
}