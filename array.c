#include <stdio.h>

int main(void)
{
	// 배열
	//int subway_1 = 30; // 지하철 1호차에 30명이 타고 있다
	//int subway_2 = 40;
	//int subway_3 = 50;
	//
	//printf("지하철 1호차에 %d 명이 타고 있습니다\n", subway_1);
	//printf("지하철 2호차에 %d 명이 타고 있습니다\n", subway_2);
	//printf("지하철 3호차에 %d 명이 타고 있습니다\n", subway_3);

	// 여러 개의 변수를 함께, 동시에 생성
	//int subway_array[3]; // [0][1][2]
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("지하철 %d호차에 %d 명이 타고 있습니다\n", i + 1, subway_array[i]);
	//}

	// 값 설정 방법
	/*int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/


	// 값은 초기화를 반드시 해야 함
	/*int arr[10];
	for (int i = 0; i < 10; i++)
	{
		printf("%d\n", arr[i]);
	}*/

	// 배열 크기는 항상 상수로 선언
	//int size = 10;
	//int arr[10];

	//int arr[10] = { 1, 2 }; // 3번째 값부터는 자동으로 '0'으로 초기화 됨
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n", arr[i]);
	//}

	int arr[] = { 1, 2 }; // arr[2]

	float arr_f[5] = { 1.0f, 2.0f, 3.0f };
	for (int i = 0; i < 5; i++)
	{
		printf("%.2f\n", arr_f[i]);
	}

	return 0;
}