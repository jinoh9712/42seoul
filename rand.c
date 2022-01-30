#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(void){
    srand(time(NULL));//난수 초기화 식
    for(int i = 0; i<10; i++){
        printf("%d\t", rand() %10); // rand() % 수(0~수 사이의 랜덤값을 뽑는 함수)
    }
    return 0;
}
