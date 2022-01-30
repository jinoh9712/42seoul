#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    srand(time(NULL));
    int num = rand() % 100;
    int num2;
    int chance = 10;
    while (chance > 0)
    {
        printf("남은 기회는 %d번입니다.\n", chance--);
        printf("숫자를 하나 입력하세요: ");
        scanf("%d", &num2);
        if (num == num2)
        {
            printf("축하합니다. 당신은 승리했습니다!\n");
            break;
        }
        else if (num > num2)
        {
            printf("up\n");
        }
        else if (num < num2)
        {
            printf("down\n");
        }

        if (chance == 0)
        {
            printf("실패하셨습니다. 다음에 다시 도전해주세요!");
            break;
        }
    }
    return 0;
}