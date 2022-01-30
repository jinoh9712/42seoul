#include <stdio.h>
int main(void){
    char arr[] = "hello";
    char *ptr = arr;
    printf("%c\n", ptr[0]);
    printf("%c\n", arr[0]);
    printf("%c\n", *(arr+0));
    printf("%p\n", arr);
    printf("%p\n", arr+0);
    printf("%p\n", &arr[0]);
    
    int arr2[] = {1,2,3,4,5,6,6,7};
    int *ptr2 = arr2;
    printf("%d\n", ptr2[3]);
    printf("%d\n", *(arr2+3));
    printf("%d\n", arr2[3]);

    printf("%p\n", &arr[3]);
    printf("%p\n", arr+3);


    


   
   
   
    return 0;
}