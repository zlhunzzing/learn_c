#include <stdio.h>

int main(void)
{
	// ������ ź�ٰ� ����, �л� / �Ϲ������� ���� (�Ϲ��� : 20��)
	//int age = 25;
	//// if (����) { ... } else { ... }
	//if (age >= 20)
	//{
	//	printf("�Ϲ��� �Դϴ�.\n");
	//}
	//else
	//{
	//	printf("�л��Դϴ�\n");
	//}

	// �ʵ��л�(8-13) / ���л�(14-16) / ����л�(17-19)���� ������?
	// if / else if / else
	int age = 25;
	if (age >= 8 && age <= 13)
	{
		printf("�ʵ��л��Դϴ�\n");
	}
	else if (age >= 14 && age <= 16)
	{
		printf("���л��Դϴ�\n");
	}
	else if (age >= 17 && age <= 19)
	{
		printf("����л��Դϴ�\n");
	}
	else
	{
		printf("�л��� �ƴѰ�����\n");
	}

	return 0;
}