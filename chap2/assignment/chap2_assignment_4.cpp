// 0913 과제 

#include <stdio.h>

int main()
{
    char ch = 300;
    printf ("ch = %c, %d\n", ch, ch);
}

// ch = , , 300

// error 1) ch는 한 문자가 아니라 %c로 받을 수 없다.
// error 2) %d는 왜 안될까? => char형으로 300을 저장했기 때문에 정수형은 당연히 안되는 것.