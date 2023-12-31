#include <stdio.h>

int main()
{
    int k = 5, *p;
    p = &k;
    printf ("%p\n", p); 
    *p = *p + 1;
    printf ("%d, %p", *p, p); 
}

/* 복습
포인터는 특정 수, 변수 등이 위치해 있는 주소값을 저장할 수 있는 변수의 형태이다.
포인터엔 기본적으로 주소 값이 저장된다.

int k = 5, *p; 
포인터형 변수 p가 선언되었다.

p = &k;
p는 변수 k의 주소값을 가진다. (포인터형 변수이기 때문에 주소값을 가질 수 있다.)

printf ("%p\n", p); // 5
p의 주소값을 출력한다. p는 주소값이기 때문에 %p 변환 지시자를 사용하였다.
만약에 포인터형 변수 p 자체의 주소값을 알고 싶다면 앞에 &를 붙이면 된다.

*p = *p + 1;
p의 주소가 가리키는 곳에 1 증가를 한다.
    
printf ("%d, %p", *p, p); // 6
*p는 k고, k는 아까 1을 증가하였기 떄문에 6이 된다. 또한 p는 전과 동일하다.
*/
