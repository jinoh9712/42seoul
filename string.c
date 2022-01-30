#include <stdio.h>
int main_string(void){
    
    char c[256];
    printf("범죄명을 기입하세요: ");
    scanf("%s", c);
    
    int a;
    printf("나이를 기입하세요: "); 
    scanf("%d", &a);
    
    int w;
    printf("몸무게를 기입하세요: ");
    scanf("%d", &w);

    char n[256];
    printf("이름을 기입하세요: "); 
    scanf("%s", n);
    
    float t;
    printf("키를 기입하세요: ");
    scanf("%f", &t);

    printf("이름 : %s, 범죄명: %s, 나이: %d, 몸무게: %d, 키: %.2f", n,c,a,w,t );
    
    return 0;
}