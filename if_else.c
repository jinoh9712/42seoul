#include <stdio.h>
int main(void)
{
    for (int i = 1; i <= 30; i++)
    {
        if (i >= 6 && i <= 10)
        {
            if (i == 7)
            {
                printf("%d번 학생은 아파서 결석했습니다.\n", i);
                continue;
            }
            printf("%d번 학생은 발표를 준비하지 않습니다.\n", i);
        }
        else
        {
            printf("%d번 학생은 발표를 준비하세요.\n", i);
        }
    }
    return 0;
}