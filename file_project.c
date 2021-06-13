#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 비밀번호를 입력 받아서
// 맞는 경우? 비밀 일기를 읽어와서 보여주고, 계속 작성하도록 합니다
// 틀린 경우? 경고 메세지를 표시하고 종료합니다

#define MAX 10000

int main(void)
{
	// fgets, fputs 활용
	char line[MAX]; // 파일에서 불러온 내용을 저장할 변수
	char contents[MAX]; // 일기장에 입력할 내용
	char password[20]; // 비밀번호 입력
	char c; // 비밀번호 입력할 때 키값 확인용 (마스킹)

	printf("비밀일기에 오신 것을 환영합니다\n");
	printf("비밀번호를 입력하세요 : ");

	// getchar() / getch() 의 차이?
	// getchar() : 엔터를 입력받아야 동작을 합니다
	// getch() :키 입력 시 바로바로 동작을 합니다

	int i = 0;
	while (1)
	{
		c = getch();
		if (c == 13) // Enter -> 비밀번호 입력 종료
		{
			password[i] = '\0';
		}
		else // 비밀번호 입력 중
		{
			printf("*");
			password[i] = c;
		}
		i++;
	}

	return 0;
}
