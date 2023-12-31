#include <stdio.h>

int main()
{
    int i = 6, j = 31;
    printf ("%d %d\n", i, j);
    {
        int i = 14;
        printf ("%d %d\n", i, j);
    }
    printf ("%d %d\n", i, j);
    return 0;
}

/* 복습
기억 클래스는 다양한 변수를 다루고, 그 변수들이 어떤 범위 내에서 활동하는 지를 다루는 차시이다.

변수는 총 4가지가 있으며 이는 아래와 같다.
1) auto : 자동 변수, 메모리 내 스택 구조로 변수 형성, 초기값 지정 안할 시 에러
2) static : 정적 변수, 주기억장치 (주메모리)에 저장, 초기값 지정 안할 시 0으로 자동 지정
3) extern : 외부 변수, (같은 디렉토리의) 외부 파일에서 선언, 초기값 지정 안할 시 0으로 자동 지정
4) register : 레지스터 변수, CPU의 캐시 메모리를 사용하기 때문에 굉장히 속도가 빠름

auto와 static은 {} 내에서 활동하는 영역이 정해져 있기 때문에 영역을 잘 판독할 필요가 있다.

위의 코드에선 auto로 형선언되었기에, i와 j엔 스택으로 변수가 저장된다.

stack i : 6 / stack j : 31
6, 31 출력
stack i : 14, 6 / stack j : 31
14, 31 출력
brace의 끝을 만났으므로, 14 탈락
stack i : 6 / stack j : 31
6, 31 출력
*/
