/*
 * Assignment 1: ���������� ����
 * �̸�: ������ӵ�
 * �й�: 2025000916
 * �Ҽ�: �ΰ���������/ ���α׷��� ���ʿ� �ǽ� 002�й�
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int user, computer;
    const char* user_choice = NULL;
    const char* computer_choice = NULL;


    // ������� ���� (1: ����, 2: ����, 3: ��)
    printf("����(1), ����(2), ��(3) �� �����ϼ���: ");
    scanf("%d", &user);

   // ��ǻ�� ������ ���� (1~3)
    srand(time(NULL));
    computer = rand() % 3 + 1;


    switch (user)
    {
        case 1:
            user_choice = "����";
            break;
        case 2: 
            user_choice = "����";     
            break;  
        case 3:     
            user_choice = "��";
            break;
        default:
            printf("�߸��� �Է��Դϴ�.\n");
            return 0;
    }


    switch (computer)
    {
        case 1:
            computer_choice = "����";
            break;
        case 2:
            computer_choice = "����";
            break;
        case 3:
            computer_choice = "��";
            break;
    }

    printf("����ڴ� %s�� �����߽��ϴ�.\n", user_choice);
    printf("��ǻ�ʹ� %s�� �����߽��ϴ�.\n", computer_choice);
   
    if (user == computer) {
        printf("�����ϴ�.\n");
    }
    else if ((user == 1 && computer == 3) || (user == 2 && computer == 1) || (user == 3 && computer == 2)) {
        printf("����� �̰���ϴ�.\n"); 
    }
    else {
        printf("����� �����ϴ�.\n");
    }
    return 0;
}