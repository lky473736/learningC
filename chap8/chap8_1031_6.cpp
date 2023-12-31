#include <stdio.h>

int main()
{
    char k1[] = "gachon"; // gachon + 널문자 == 7개
    char *k2 = "univ."; // univ. + 널문자 == 6개
    char *p;
    
    printf ("%s, %s\n", k1, k2);
    
    p = k1;
    printf ("%s\n", p);
    
    p = k2;
    printf ("%s", p);
}

/* 복습
문자열을 정의하는 방법은 크게 3가지다.
1) 문자열 배열을 사용
2) 프리프로세서를 이용한 매크로 사용
3) 포인터형 변수를 사용
(문자열을 2개 이상을 가진 배열은 포인터형 배열로 사용)

포인터형 변수에 문자열을 저장하면 그 문자열의 주소값이 저장이 되기 때문에 문자열을 부를 때,
변환 지시자 %s와 포인터명 그대로 작성하면 된다.

만일 다른 변수에 대입하고 싶을 땐, 그 변수가 반드시 포인터형 변수여야 한다. 
(당연한 게, 포인터형 변수에 들어가는 것은 주소값이기 때문이다.
*/
