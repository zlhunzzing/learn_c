#include <stdio.h>
#include <time.h>

// 5������ ����̰� �ִ�
// �ƹ� Ű�� ������ �������� ����̸� �̵�
// 5���� ��� �� ������ �ؼ� ������ Ű��� �Ǵ� ���� @
// �� �� �� �� �� �� @

// �����
// �̸�, ����, ����, Ű��� ���̵� (����)

typedef struct {
	char* name; // �̸�
	int age; // ����
	char* character; // ����
	int level; // Ű��� ���̵� (1-5, 5�� �����)
} CAT;

// ������� ������ �����
int collection[5] = { 0, 0, 0, 0, 0, };

// ��ü ����� ����Ʈ
CAT cats[5];

void initCats(); // ����� ���� �ʱ�ȭ
void printCat(int selected);
int main(void)
{
	srand(time(NULL));

	initCats();
	void printCat(int selected);
	while (1)
	{
		printf("�αٵα�~! ��� ������� ���簡 �ɱ��?\n�ƹ� Ű�� ������ Ȯ���ϼ���!");
		//getChar();

		int selected = rand() * 5; // 0-4 ������ ���� ��ȯ
		printfCat(selected);
	}

	return 0;
}

void initCats()
{
	cats[0].name = "������";
	cats[0].age = 5;
	cats[0].character = "�¼�";
	cats[0].level = 1;

	cats[1].name = "�Ϳ��";
	cats[1].age = 3;
	cats[1].character = "��ī��";
	cats[1].level = 2;

	cats[2].name = "������";
	cats[2].age = 7;
	cats[2].character = "�� �Ḹ ��";
	cats[2].level = 3;

	cats[3].name = "�����";
	cats[3].age = 2;
	cats[3].character = "�ò�����";
	cats[3].level = 4;

	cats[4].name = "�ų���";
	cats[4].age = 1;
	cats[4].character = "�����";
	cats[4].level = 5;
}

void printCat(int selected)
{
	printf("\n\n=== ����� �� ������� ���簡 �Ǿ����! ===\n\n");
	printf(" �̸� :       %s\n", cats[selected].name);
	printf(" ���� :       %d\n", cats[selected].age);
	printf(" Ư¡(����) : %s\n", cats[selected].character);
	printf(" ���� :       ");

	for (int i = 0; i < cats[selected].level; i++)
	{
		printf("%s", "sd");
	}
	printf("\n\n");
}