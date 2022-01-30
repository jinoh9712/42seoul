#include <stdio.h>
void swap(int a, int b);
void swap_address(int *a, int*b);
void chg_array(int *ptr);
int main(void)
{
    /*int 철수 = 1;
    int 영희 = 2;
    int 민수 = 3;
    printf("철수네 주소 : %p, 철수네 암호 %d\n", &철수, 철수);
    printf("영희네 주소 : %p, 영희네 암호 %d\n", &영희, 영희);
    printf("민수네 주소 : %p, 민수네 암호 %d\n", &민수, 민수);

    int *p = &철수;
    printf("%p, %d\n",p, *p);
    p = &영희;
    printf("%p, %d\n",p, *p);
    p = &민수;
    printf("%p, %d\n",p, *p);
    
    p = &철수;
    *p *= 3;
    printf("%d\n", *p);
    p = &영희;
    *p *= 3;
    printf("%d\n", *p);
    p = &민수;
    *p *= 3; 
    printf("%d\n", *p);
    
    
    int *스파이 = &철수; // *스파이 == 철수
    *스파이 = *스파이 -2;
    printf("스파이의 주소 : %p, 스파이의 암호 : %d\n\n", 스파이, *스파이);

    printf("철수네 주소 : %p, 철수네 암호 %d\n", &철수, 철수);
    printf("영희네 주소 : %p, 영희네 암호 %d\n", &영희, 영희);
    printf("민수네 주소 : %p, 민수네 암호 %d\n", &민수, 민수); // 결국 포인터로 변수의 값을 바꿔버렸다.

    //포인터 변수 p 또한 변수기에 고유의 주소값이 존재한다
    printf("%p\n", &p);
    printf("%p\n", &스파이);

    int arr[] = {100, 200 ,300};
    int *ptr = arr; //arr[]가 아닌 arr 자체는 주소값을 의미함.
    for(int i = 0; i < 3; i++)
    {
        printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);   
    }
    for(int i = 0; i < 3; i++)
    {
        printf("포인터 배열 ptr[%d]의 값 : %d\n", i, ptr[i]);   
    } 
    ptr[0] = 1000;
    ptr[1] = 2000;
    ptr[2] = 3000;
     for(int i = 0; i < 3; i++)
    {
        printf("배열 arr[%d]의 값 : %d\n", i, arr[i]);   
    } // 포인터 배열의 각 배열값을 바꾸면 원래 배열값도 바뀐다
    
    printf("arr[0]의 값 : %d\n", *arr);
    printf("arr[0]의 값 = %d\n", arr[0]);
    printf("arr[0]의 주솟값 : %p\n", arr);
    printf("arr[0]의 주솟값 : %p\n", &arr[0]); */


    /*배열은 주소 그 자체이기때문에 배열의 포인터 변수를 선언할 때 &를 붙이지 않아도 된다.
    또한 배열은 주소 그 자체이기 때문에 arr[i]의 값은 *(arr+i)과 같다. arr은 배열의 순서를 의미하는데, 그 시작이 0이기에 arr의 값은 0이다. 즉 i값을 더해줌으로써 주소의 순서를 표현하고, 
    *을값앞에 붙여줌으로써 주소의 값을 출력한다.
  >>  arr[i] == *(arr+i)
  >>  arr(arr 자체의 값) == arr[0]의 주소값(배열의 첫 번째 값의 주소)
  >>  *arr == arr[0]의 실제 값
    */

   // swap
 /*  
   int a = 10;
   int b = 20;
  
   swap(a,b);
   printf("함수 밖의 a 값 : %d, 함수 내의 b 값: %d\n", a, b);
   swap_address(&a,&b); 
   printf("함수 밖의 a 값 : %d, 함수 내의 b 값: %d\n", a, b);  */

   // 포인터로 배열의 값 변경하기
   int array2[] = {100, 200, 300};
   //chg_array(array2);
   chg_array(&array2[0]); //array2 == &array[0]
   for(int i =0; i<3; i++)
   {
       printf("array2[%d] = %d\n", i, array2[i]);
   }

    return 0;
}
void swap(int a, int b)
{   
    int temp = a;
    a=b;
    b = temp;

    printf("함수 내의 a 값 : %d, 함수 내의 b 값: %d\n", a, b);
}
void swap_address(int *a, int*b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("스왑 함수 내의 a 값: %d, b의 값: %d\n", *a, *b);
}
void chg_array(int *ptr)
{
    ptr[2] = 50;
}