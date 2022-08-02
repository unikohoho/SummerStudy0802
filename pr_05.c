//입력함수 scanf연습 : 사용자의 나이를 입력받아 출력하기

#include<stdio.h>

int main(void) {
	int age;

	printf("나이를 입력하세요 : ");
	scanf("%d", &age);
	printf("나이 : %d\n", age);
	
	return 0;

}