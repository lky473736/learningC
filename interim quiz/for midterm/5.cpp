/*
5. 놀이 공원에서  롤로코스터를 타려면 키가 150 cm이상이고, 나이가 12살 이상은 되어야 한다고 한다. 사용자로부터 나이와 키를 입력 받아서 타도 된다면 "환영합니다,"로 출력하고 탈 수 없다면 "죄송합니다."로 출력되는 프로그램을 작성하라. [if 문 사용]
*/

#include <stdio.h>

int main()
{
    int height = 0, age = 0;
    
    scanf ("%d %d", &height, &age);
    
    if (height >= 150 && age >= 12)
    {
        printf ("환영합니다^ㅁ^");
    }
    
    else
    {
        printf ("죄송합니다ㅠㅁㅠ");
    }
}
