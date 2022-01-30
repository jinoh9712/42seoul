#include <stdio.h>
int main(void){
    int arr[2][5]= {{1,2,3,4,5},{6,7,8,9,0}};
   printf("%d\n", arr[1][2]);
   for(int i = 0 ; i<2; i++)
   {
       for(int j = 0; j<5 ; j++){
           printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
       }
   }
    return 0;
}