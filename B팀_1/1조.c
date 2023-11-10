#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define ANSI_COLOR_RED      "\x1b[31m"
#define ANSI_COLOR_GREEN    "\x1b[32m"
#define ANSI_COLOR_YELLOW   "\x1b[33m"
#define ANSI_COLOR_BLUE     "\x1b[34m"
#define ANSI_COLOR_MAGENTA  "\x1b[35m"
#define ANSI_COLOR_RESET    "\x1b[0m"


int main() {
    char name[10];
    int height, weight;
    float fatness;      //비만도


    //1. 사용자 정보 입력받기
    printf("\n*******************\n");            //구분선
    printf("안녕하세요!\n일상 운동 루틴 추천 프로그램을 이용해주셔서 감사합니다.\n");
    printf("사용자의 이름을 입력해주세요. : ");
    scanf("%s", name);

    //1-1. 신체 정보 입력(키, 몸무게)
    printf("\n*******************\n");            //구분선
    printf("반갑습니다, %s님!\n", name);            //환영문구
    printf("신체 정보를 입력해주세요.\n");

    printf("키는 얼마입니까?(cm) : ");
    scanf("%d", &height);

    printf("몸무게는 얼마입니까?(kg) : ");
    scanf("%d", &weight);


    //1-2. 기록하기(텍스트 파일로 저장하기  <-- 나중에 불러와야할 때)

    //----------------------------------------------------------------------------
    //2. 운동 루틴 추천하기
    // --> 비만도 계산

    //카우프 지수에 따르면 "비만도" = 체중(kg) / (신장(m) * 신장(m))
    fatness = (float)weight / ((float)height * 0.01 * (float)height * 0.01);   //미터값을 기준으로 하기 때문에 키에 각각 0.01을 곱해줌.

    //18.5 이하 저체중, 18.5~23.0 정상, 23.0~25.0 과체중, 25.0~30.0 비만, 30.0 이상 비만
    if (fatness < 18.5) {
        printf(ANSI_COLOR_YELLOW "..........□□□\n");
        printf("........□□□□□\n");
        printf("........□□□□□\n");
        printf("..........□□□\n");
        printf("........□□□□□\n");
        printf("......□□□□□□□\n");
        printf("....□□□□□□□□□\n");
        printf("...□□□□□□□□□□\n");
        printf("..□□  □□□□□  □□\n");
        printf("........□□□□□\n");
        printf("........□□  □□\n");
        printf("........□□  □□\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf(".........<저체중입니다.건강에 유의해주세요.>\n" ANSI_COLOR_RESET);
    }
    else if (fatness < 23.0) {
        printf(ANSI_COLOR_GREEN "..........□□□\n");
        printf("........□□□□□\n");
        printf("........□□□□□\n");
        printf("..........□□□\n");
        printf("........□□□□□\n");
        printf("......□□□□□□□\n");
        printf("....□□□□□□□□□\n");
        printf("...□□□□□□□□□□\n");
        printf("..□□  □□□□□  □□\n");
        printf("........■■■■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf(".........<정상체중입니다>\n" ANSI_COLOR_RESET );
    }
    else if (fatness < 25.0) {
        printf(ANSI_COLOR_BLUE "..........□□□\n");
        printf("........□□□□□\n");
        printf("........□□□□□\n");
        printf("..........□□□\n");
        printf("........□□□□□\n");
        printf("......■■■■■■■\n");
        printf("....■■■■■■■■■\n");
        printf("...■■■■■■■■■■\n");
        printf("..■■  ■■■■■  ■■\n");
        printf("........■■■■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf(".........<과체중입니다. 건강에 유의해주세요.>\n" ANSI_COLOR_RESET);
    }
    else if (fatness < 30.0) {
        printf(ANSI_COLOR_MAGENTA "..........□□□\n");
        printf("........□□□□□\n");
        printf("........□□□□□\n");
        printf("..........■■■\n");
        printf("........■■■■■\n");
        printf("......■■■■■■■\n");
        printf("....■■■■■■■■■\n");
        printf("...■■■■■■■■■■\n");
        printf("..■■  ■■■■■  ■■\n");
        printf("........■■■■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf(".........<비만입니다. 건강에 유의해주세요.>\n" ANSI_COLOR_RESET);
    }
    else {
        printf(ANSI_COLOR_RED "..........■■■\n");
        printf("........■■■■■\n");
        printf("........■■■■■\n");
        printf("..........■■■\n");
        printf("........■■■■■\n");
        printf("......■■■■■■■\n");
        printf("....■■■■■■■■■\n");
        printf("...■■■■■■■■■■\n");
        printf("..■■  ■■■■■  ■■\n");
        printf("........■■■■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf("........■■  ■■\n");
        printf(".........<고도비만입니다. 건강에 유의해주세요.>\n" ANSI_COLOR_RESET);
    }

    return 0;
}