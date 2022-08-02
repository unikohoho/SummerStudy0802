//세자리 양의 정수를 입력 받아 각각의 자릿수를 분리해서 출력하는 프로그램

#include<stdio.h>

int main(void) {
	//변수 선언: 입력받는 세자리 정수, 백의 자리, 십의 자리, 일의 자리
	int input, h, t, o;

	//입력받기
	printf("자릿수를 분리하고 싶은 세자리 양의 정수를 입력하세요 : ");
	scanf("%d", &input);

	//자릿수 분리 알고리즘
	h = input / 100;
	t = (input % 100) / 10;
	o = (input % 100) % 10;

	//출력
	printf("백의자리 : %d, 십의 자리 : %d, 일의 자리 : %d\n", h, t, o);

	return 0;


}