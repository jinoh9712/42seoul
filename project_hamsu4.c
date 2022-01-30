#include <stdlib.h>
#include <time.h>
#include <stdio.h>
int GetRandomInteger1(int l)
{

    return rand() % 5*l + 1;
}

void question()
{
    int a = 0, b = 0;
    int ans;
    int chance = 5;
    int level;
      
    while (chance > 0)
    {   a = GetRandomInteger1(level);
        srand(time(NULL));
        b = GetRandomInteger1(level); 
        printf("현재 레벨은 %d입니다.\n",level);
        printf("\n%d*%d = ?", a, b);
        printf("\n남은 기회는 %d번입니다.\n", chance);
        scanf("%d", &ans);
        if (ans == a * b)
        {
            printf("\n정답입니다. 다음 단계로 넘어갑니다.\n");
            level++;
            chance =5;
            
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

int main(void){
    question();    
    return 0;
}