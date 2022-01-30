#include <stdlib.h>
#include <stdio.h>
#include <time.h>

static int error = 100;
int carculation(int ans, int a, int b)
{
    int result = a * b;

    if (ans == result)
    {
        return 0;
    }
    else
    {
        return error;
    }
}

int main(void)
{
    int answer;
    int chance = 5;
    int level = 1;

    while (chance > 0)
    {
        srand(time(NULL));
        int num3 = rand() % 10 * level + 1;
        int num4 = rand() % 10 * level + 1;
        printf("\n기회는 %d번입니다.\n", chance);
        printf("%d * %d = ?\n", num3, num4);
        scanf("%d", &answer);
        int result = carculation(answer, num3, num4);
        switch (level)
        {
        case 1:
            if (result == 0)
            {
                printf("정답입니다.\n");
                chance = 5;
                printf("%d레벨을 통과하셨습니다.\n", level);
                level++;
                break;
            }
            else if (result == error)
            {
                chance--;
                printf("오답입니다.\n");
                break;
            }
        case 2:
            if (result == 0)
            {
                printf("정답입니다.\n");
                chance = 5;
                printf("%d레벨을 통과하셨습니다.\n", level);
                level++;
                break;
            }
            else if (result == error)
            {
                chance--;
                printf("오답입니다.\n");
                break;
            }
        case 3:
            if (result == 0)
            {
                printf("%d레벨을 통과하셨습니다.\n", level);
                printf("정답을 모두 맞히셨습니다. 당신은 곱셈왕입니다.\n");
                chance = 0;
                break;
            }
            else if (result == error)
            {
                chance--;
                printf("오답입니다.\n");
                break;
            }
        }
    }

    return 0;
}