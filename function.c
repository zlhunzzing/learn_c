#include <stdint.h>>

// 선언
void p(int num);

int main(void)
{
	// function
	// 계산기

	int num = 2;
	//printf("num은 %d 입니다\n", num); // 2
	p(num);

	// 2 + 3 은?
	num = num + 3; // num += 3;
	//printf("num 은 %d 입니다\n", num); // 5
	p(num);

	// 5 - 1 은?
	num -= 1; // num = num -1;
	//printf("num 은 %d 입니다\n", num); // 5
	p(num);

	// 4 x 3 은 ?
	num *= 3;
	//printf("num 은 %d 입니다\n", num); // 12
	p(num);

	// 12 / 6 은 ?
	num /= 6;
	//printf("num 은 %d 입니다\n", num); // 2
	p(num);

	return 0;
}

// 정의
void p(int num)
{
	printf("num 은 %d 입니다\n", num);
}
// 전달값
// 함수 : ㅁ + 4
// 반환형 : ?
void 함수이름(int num, int num2, char c, float f)
{
}