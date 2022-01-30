#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int GetRandomInteger1()
{

    return rand() % 10 + 1;
}
int GetRandomInteger2()
{

    return rand() % 100 + 1;
}
int GetRandomInteger3()
{

    return rand() % 1000 + 1;
}
void question1()
{
    int a = 0, b = 0;
    int ans;
    int chance = 5;
    a = GetRandomInteger1();
    srand(time(NULL));
    b = GetRandomInteger1();
    printf("%d*%d = ?", a, b);
    while (chance > 0)
    {
        printf("\n남은 기회는 %d번입니다.\n", chance);
        scanf("%d", &ans);
        if (ans == a * b)
        {
            printf("\n정답입니다. 다음 단계로 넘어갑니다.\n");
            break;
        }
        else
        {
            printf("\n오답입니다.\n");
            chance--;
        }
        if (chance == 0)
        {
            printf("\n기회를 모두 소진하셨습니다.\n");
            break;
        }
    }
}
void question2()
{
    int a = 0, b = 0;
    int ans;
    int chance = 5;
    a = GetRandomInteger2();
    srand(time(NULL));
    b = GetRandomInteger2();
    printf("%d*%d = ?", a, b);
    while (chance > 0)
    {
        printf("\n남은 기회는 %d번입니다.\n", chance);
        scanf("%d", &ans);
        if (ans == a * b)
        {
            printf("\n정답입니다. 다음 단계로 넘어갑니다.\n");
            break;
        }
        else
        {
            printf("\n오답입니다.\n");
            chance--;
        }
        if (chance == 0)
        {
            printf("\n기회를 모두 소진하셨습니다.\n");
            break;
        }
    }
}
void question3()
{
    int a = 0, b = 0;
    int ans;
    int chance = 5;
    a = GetRandomInteger3();
    srand(time(NULL));
    b = GetRandomInteger3();
    printf("%d*%d = ?", a, b);
    while (chance > 0)
    {
        printf("\n남은 기회는 %d번입니다.\n", chance);
        scanf("%d", &ans);
        if (ans == a * b)
        {
            printf("\n정답입니다. 당신은 곱셈왕입니다.\n");
            break;
        }
        else
        {
            printf("\n오답입니다.\n");
            chance--;
        }
        if (chance==0)
        {
            printf("\n기회를 모두 소진하셨습니다.\n");
            break;
        }
    }
}
int main(void){
    question1();
    question2();
    question3();
    return 0;
}