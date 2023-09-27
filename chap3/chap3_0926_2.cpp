#include <stdio.h>

int main()
{
    short int i = 0xff; // 0000 0000 1111 1111
    
    i &= 255; // 0000 0000 1111 1111
    printf ("%d\n", i); // 0000 0000 1111 1111
    
    i = 32767; // 0111 1111 1111 1111
    i ^= i; // 자기 자신과 XOR 
    printf ("%d\n", i); // 0000 0000 0000 0000
    
    i = 0x1000; // 0001 0000 0000 0000 
    i |= 0x8000; // 1000 0000 0000 0000
    printf ("%d\n", i); // 1001 0000 0000 0000 -> 1의보수 0110 1111 1111 1111 -> 2의 보수 0111 0000 0000 0000
    
    return 0;
}

// %d 대신 %x, %o를 넣으면 무슨 차이를 띄는가? (진법 변환 지시자)