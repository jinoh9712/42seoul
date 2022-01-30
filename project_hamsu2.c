#include <time.h>
#include <stdlib.h>
#include <stdio.h>
void hamsu()
{   srandom(time(NULL));
    int chance = 5;
    int num3;
    int num1;
    int num2; 
    
    while (chance > 0)
    {   num1 = rand() %100+1;
        num2 = rand() %100+1;
        printf("\n당신에게 주어진 기회는 %d번 입니다.\n", chance);
        printf("%d * %d = ?", num1, num2);
        scanf("%d", &num3);
        if (num3 == num1 * num2)
        {
            printf("정답입니다. 다음 단계로 넘어갑니다.");
            chance = 5;
        }
        else
        {
            printf("오답입니다.\n");
            chance--;
        }
        if (chance == 0)
        {
            printf("기회를 모두 소진하셨습니다. 다음에 도전해주세요.");
            continue;
        }
    }
}
int main(void)
{
    hamsu();
    return 0;
}