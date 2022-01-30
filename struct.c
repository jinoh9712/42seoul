#include <stdio.h>

struct GameInfo
{
    char *name;
    int year;
    int price;
    char *company;

    //연관 업체 게임(구조체 안의 구조체)

    struct GameInfo *friendGame; //연관 업체 게임
};
//구조체의 별명 짓기
typedef struct person
{
    char *name; //내용물
    int age;

} person_info; //구조체 별명

typedef struct 
{
int age;
int height;
int weight;
} person_body; //이처럼 구조체 이름이 없어도 typedef로 별명을 붙여준다면, 구조체 이름 대신 별명으로 호출할 수 있다.


int main(void)
{
    // 구조체 사용
    struct GameInfo gameInfo1;
    gameInfo1.name = "나도게임";
    gameInfo1.price = 49;
    gameInfo1.year = 2018;
    gameInfo1.company = "나도회사";
    //구조체 출력
    printf("\n ============ \n");
    printf(" 게임명 : %s\n", gameInfo1.name);
    printf(" 게임가격 : %d\n", gameInfo1.price);
    printf(" 게임출시년도 : %d\n", gameInfo1.year);
    printf(" 게임회사 : %s\n", gameInfo1.company);
    //구조체를 배열처럼 초기화
    struct GameInfo gameInfo2 = {"너도게임", 50, 2019, "너도회사"};
    printf("\n======\n");
    printf("\n ============ \n");
    printf(" 게임명 : %s\n", gameInfo2.name);
    printf(" 게임가격 : %d\n", gameInfo2.price);
    printf(" 게임출시년도 : %d\n", gameInfo2.year);
    printf(" 게임회사 : %s\n", gameInfo2.company);
    //구조체 배열
    struct GameInfo gameArray[2] = {
        {"나도게임", 2017, 50, "나도회사"},
        {"너도게임", 2018, 49, "너도회사"}};
    //구조체 포인터
    struct GameInfo *gamePtr;
    gamePtr = &gameInfo1;
    printf("\n ============ \n");
    printf(" 게임명 : %s\n", (*gamePtr).name);
    printf(" 게임가격 : %d\n", (*gamePtr).price);
    printf(" 게임출시년도 : %d\n", (*gamePtr).year);
    printf(" 게임회사 : %s\n", (*gamePtr).company);
    printf("\n ============ \n");
    printf(" 게임명 : %s\n", gamePtr->name);
    printf(" 게임가격 : %d\n", gamePtr->price);
    printf(" 게임출시년도 : %d\n", gamePtr->year);
    printf(" 게임회사 : %s\n", gamePtr->company); // 구조체 배열들을 표현할 때 *gamePtr.항목으로 해버리면 gamePtr.항목의 배열값 나오지, gamePtr의 주소값이 나오지 않기에 괄호를 쳐준다.
    // 이는 불편한 방식이므로 주소값의 배열값을 나타내고 싶다면 화살표로 바까준다.

    //연관 업체 게임 소개
    gameInfo1.friendGame = &gameInfo2;
    printf("\n ======연관 업체의 게임 출시 정보====== \n");
    printf(" 게임명 : %s\n", gameInfo1.friendGame->name);
    printf(" 게임가격 : %d\n", gameInfo1.friendGame->price);
    printf(" 게임출시년도 : %d\n", gameInfo1.friendGame->year);
    printf(" 게임회사 : %s\n", gameInfo1.friendGame->company); //연관업체 friend게임은 구조체 안의 구조체이자 구조체의 포인터이다.

    //typedef
    //자료형에 별명 지정
    int i = 1;
    typedef int 정수;
    정수 정수변수 = 3; // int i = 3과 같은 동작을 하고 있음
    typedef float 실수;
    실수 실수변수 = 3.23f; // float f = 3.23f와 같음
    printf("정수변수 : %d, 실수변수 %.2f\n\n", 정수변수, 실수변수);

    typedef struct GameInfo 게임정보;
    게임정보 game1;
    game1.name = "한글 게임";
    game1.year = 2015;

    //선언한 별명 구조체로 사람 정보 입력하기
    person_info jinoh;
    jinoh.name = "정진오";
    jinoh.age = 17;
    struct person jihee;
    jihee.name = "백지희";
    jihee.age = 28;
    
    return 0;
}