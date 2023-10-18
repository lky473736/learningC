// 포인터 : 다음에 처리할 데이터의 주소값

#include <stdio.h>

int main()
{
    int k[3] = {10, 20}; 
    int i, *p; // 포인터형 변수 p 선언
    
    p = k; // 포인터형 변수에 k 배열의 시작 주소 값을 저장
    
    for (int i = 0; i < 3; i++)
    {
        printf ("%d, %p\n", k[i], p + i); // 끝에 지정 안해줬으니깐 0
        // component 지정 안해주면 0
    }
}
