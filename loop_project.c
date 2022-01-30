#include <stdio.h>
int main_loop_project(void)
{
    int floor;
    printf("몇 층으로 쌓겠느냐?");
    scanf("%d", &floor);
    for (int i = 1; i <= floor; i++)
    {
        for (int j = i; j <= floor - 1; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= ((2 * i) - 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
