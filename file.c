#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX 10000
int main(void)
{
	// ���� �����
	// ���Ͽ� � �����͸� ����
	// ���Ͽ� ����� �����͸� �ҷ�����
	
	// fputs, fgets  ��
	char line[MAX]; // char[10000]
	FILE* file = fopen("C:\\Users\\zlhunzzing\\Desktop\\test1.txt", "wb"); // r w a, t b
	if (file == NULL)
	{
		printf("���� ���� ����\n");
		return 1;
	}

	fputs("fputs �� �̿��ؼ� ���� ����Կ�\n", file);
	fputs("�� �������� Ȯ�����ּ���", file);

	// ������ ���� ���� ���� ���� ���¿��� � ���α׷��� ������ �����?
	// ������ �ս� �߻� ���� ! �׷��� �׻� ������ �ݾ��ִ� ������ �鿩�ּ���
	fclose(file);

	// fprintf, fscanf  ��

	return 0;
}