//��������� ���� : �� ������ �ð��� �Է� �޾� �� ��, �� �������� ����ϴ� ���α׷�

#include<stdio.h>

int main(void) {
	int input, min, sec;

	printf("�� ���� �ð��� �Է����ּ��� : ");
	scanf("%d", &input);

	min = input / 60;
	sec = input % 60;

	printf("%d�ʴ� %d�� %d���Դϴ�.\n", input, min, sec);

	return 0;

	
}