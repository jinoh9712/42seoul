#include <stdio.h>
int main(void){
  //  char str[7] = "coding"; //문자열은 무조건 큰 따옴표
   // printf("%s\n", str); //문자열을 표현할 땐 끝에 [|0](널문자)가 포함되어야 함. 그렇지만 문자열이 6자리로 꽉 찼을 땐 문자열보다 배열을 한 자리 더 선언해줌으로써 널문자를 포함시킬 수 있음.
    //만약 "coding"을 출력하기 위해 배열을 6자리만 선언하면 쓰레기값이 coding 뒤에 포함됨.

 //   char str[] = "coding1"; //문자열은 배열의 크기를 지정하지 않고 선언해도 됨
   /* printf("%s\n", str); 
    printf("%lu\n", sizeof(str)); //그 사이즈는 문자열 +1임 > 널문자가 포함되었기 때문
    */
   //for(int i = 0; i<sizeof(str); i++){
     //  printf("%c\n",str[i]);
   //}
/*   char str[]="나도코딩";
   int i = sizeof(str);
   printf("%s, %d\n", str, i);

   char name[256];
   printf("이름을 입력하세요: ");
   scanf("%s", name);
   printf("%s",name); */
   for(int i = 0 ; i < 128; i++)
   {
       printf("아스키값 %d에 해당하는 문자는 %c다\n.",i,i);
   }

   return 0;
}