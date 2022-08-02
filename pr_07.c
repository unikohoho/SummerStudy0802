//산술연산자 연습 : 초 단위의 시간을 입력 받아 몇 분, 몇 초인지를 계산하는 프로그램

#include<stdio.h>

int main(void) {
	int input, min, sec;

	printf("초 단위 시간을 입력해주세요 : ");
	scanf("%d", &input);

	min = input / 60;
	sec = input % 60;

	printf("%d초는 %d분 %d초입니다.\n", input, min, sec);

	return 0;

	
}