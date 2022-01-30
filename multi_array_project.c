#include <stdio.h>
#include <stdlib.h>
int match(char a, char b);
int main(void)
{
    //10마링듸 서로 다른 동물
    // 사용자로부토ㅓ 2개의 입력값을 받아서 같은 동물 찾으면 카드 뒤집기
    //모든 동물 쌍을 찾으면 게임 종료
    // 총 실패 횟수 알려주기
    char answer_1;
    char answer_2;

    char arr[2][10] =
        {
            {'l', 't', 'e', 'd', 'c', 'b', 'i', 'r', 'a', 's'},
            {'l', 't', 'e', 'd', 'c', 'b', 'i', 'r', 'a', 's'}
        };
    
    
    while (1)
    {   printf("동물을 한 마리 고르시오: ");
        scanf("%c", answer_1);
        printf("다른 동물을 한 마리 고르시오: ");
        scanf("%c", answer_2);
        int result = match(answer_1, answer_2); // 결과값이 10에 도달할때까지 무한 반복. 마지막에 다 맞히고 나면 틀린 횟수를 출력하기
        int correct = 0;
        int wrong = 0;
        switch (result)
        {
        case 1:
            correct++;
            if (correct == 10)
            {
                printf("동물을 전부 맞혔습니다. 당신은 %d번 실수하셨습니다.", wrong);  
                exit(0);      
            }
            printf("같은 동물입니다. %d번 더 같은 동물을 찾아주세요.", 10 - correct);
            break;
        case 0:
            wrong++;
            printf("같은 동물이 아닙니다. 다시 입력하세요.");
            break;
        default:
            break;
        }
    }

    return 0;
}
int match(char a, char b)
{
    if (a == b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}