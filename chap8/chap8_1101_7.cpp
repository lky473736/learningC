#include <stdio.h>

int main()
{
    char k[3][4] = {"abc", "def", "ghi"}; // a, b, c, \0, d, e, f, \0, g, h, i, \0
    // char k[3][4] ... <- 문자열의 2차원 배열 (4바이트씩 차이남)
    // char *k[] ... <- 문자열의 포인터형 배열 (4바이트씩 차이나지 않음 - 각각 다른 위치에 기억이 되기 때문에)
    
    char *p1, *p2, *p3;
    
    p1 = k[0];
    p2 = k[1];
    p3 = k[2];
    
    printf ("%p\n", p1);
    printf ("%p\n", p2);
    printf ("%p\n", p3); // 2차원 배열이면 4바이트씩 차이남
    
    printf ("%s\n", p1);
    puts(p2);
    while (*p3)
    {
        putchar (*p3);
        p3++;
    }
}
