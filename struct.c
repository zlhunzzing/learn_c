#include <stdint.h>

struct  GameInfo {
	char* name;
	int year;
	int price;
	char* company;
};

int main(void)
{
	// [게임 출시]
	// 이름 : 나도게임
	// 발매년도 : 2017 년
	// 가격 : 50원
	// 제작사 : 나도회사

	char* name = "나도회사";
	int year = 2017;
	int price = 50;
	char* company = "나도회사";

	// [또다른 게임 출시]
	// 이름 : 너도게임
	// 발매년도 : 2017 년
	// 가격 : 100 원
	// 제작사 : 너도회사

	char* name2 = "너도게임";
	int year2 = 2017;
	int price2 = 100;
	char* company2 = "너도회사";

	// 구조체 사용
	struct GameInfo gameInfo1;
	gameInfo1.name = "나도게임";
	gameInfo1.year = 2017;
	gameInfo1.price = 50;
	gameInfo1.company = "나도회사";

	// 구조체 출력
	printf("-- 게임 출시 정보 --\n");
	printf("  게임명  : %s\n", gameInfo1.name);
	printf("  발매년도: %d\n", gameInfo1.year);
	printf("  가격    : %d\n", gameInfo1.price);
	printf("  제작사  : %s\n", gameInfo1.company);

	// 구조체를 배열처럼 초기화
	struct GameInfo gameInfo2 = { "너도게임", 2017, 100, "너도회사" };
	printf("-- 게임 출시 정보 --\n");
	printf("  게임명  : %s\n", gameInfo2.name);
	printf("  발매년도: %d\n", gameInfo2.year);
	printf("  가격    : %d\n", gameInfo2.price);
	printf("  제작사  : %s\n", gameInfo2.company);

	return 0;
}