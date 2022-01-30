#include <stdio.h>
int main(void)
{
    int age;
    int num;
    printf("나이를 입력하세요: ");
    scanf("%d", &age);
    if (8 <= age && 13 >= age)
    {
        num = 1;
    }
    else if (14 <= age && age <= 16)
    {
        num= 2;
    }
    else if (17 <= age && age <= 19)
    {
        num = 3;
    }
    else{
        num = 0;
        printf("학생이 아닙니다");
    }
    switch (num)
    {
    case 1:
        printf("초등학생입니다");
        break;
    case 2:
        printf("중학생입니다");
        break;
    case 3:
        printf("고등학생입니다");
        break;
    default:
        
        break;
    }

    return 0;
}