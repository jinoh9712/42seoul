#include <stdio.h>
int main(void) {
   int num01, num02, num03;
   char a[256];
   printf("첫 번째 값을 입력하세요: ");
   scanf("%d", &num01);
   printf("두 번째 값을 입력하세요: ");
   scanf("%d", &num02);
   printf("세 번째 값을 입력하세요: ");
   scanf("%d", &num03);
   printf("문자열을 입력하세요: ");
   scanf("%s", a);
   printf("입력값들 : %d,s %d, %d\n", num01,num02,num03);
   printf("입력한 문자열 : %s\n", a);
   return 0;
}