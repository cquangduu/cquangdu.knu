/*
 * Assignment 1: 가위바위보 게임
 * 이름: 차오쿠앙두
 * 학번: 2025000916
 * 소속: 인공지능전공/ 프로그래밍 기초와 실습 002분반
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int user, computer;
    const char* user_choice = NULL;
    const char* computer_choice = NULL;


    // 사용자의 선택 (1: 가위, 2: 바위, 3: 보)
    printf("가위(1), 바위(2), 보(3) 중 선택하세요: ");
    scanf("%d", &user);

   // 컴퓨터 무작위 선택 (1~3)
    srand(time(NULL));
    computer = rand() % 3 + 1;


    switch (user)
    {
        case 1:
            user_choice = "가위";
            break;
        case 2: 
            user_choice = "바위";     
            break;  
        case 3:     
            user_choice = "보";
            break;
        default:
            printf("잘못된 입력입니다.\n");
            return 0;
    }


    switch (computer)
    {
        case 1:
            computer_choice = "가위";
            break;
        case 2:
            computer_choice = "바위";
            break;
        case 3:
            computer_choice = "보";
            break;
    }

    printf("사용자는 %s를 선택했습니다.\n", user_choice);
    printf("컴퓨터는 %s를 선택했습니다.\n", computer_choice);
   
    if (user == computer) {
        printf("비겼습니다.\n");
    }
    else if ((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2)) {
        printf("당신이 이겼습니다.\n"); 
    }
    else {
        printf("당신이 졌습니다.\n");
    }
    return 0;
}