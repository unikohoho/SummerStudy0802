//���� ������ ���� : ��ġ������ ��ġ������ ������

#include<stdio.h>

int main(void) {
	int x = 10, y = 10;
	int result;

	result = x++;
	printf("%d , %d\n", x, result);//x =11, result = 10 
	result = ++y;
	printf("%d , %d\n", y, result);//y = 11, result = 11

	return 0;

}