#include <stdio.h>
void car(int a, int b)
{
    char v;
    printf("연산자를 입력하세요: ");
    scanf("%c", &v);

    switch (v)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%.2f", (float)a / (float)b);
        if (b == 0)
        {
            printf("0을 분모로 나눌 수 없습니다.");
        }
        break;
    default:
        printf("잘못된 연산자입니다.");
        break;
    }
}
int main(void)
{
    car(3, 0);
    return 0;
}
