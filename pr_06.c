//입력함수 연습 : 두 실수를 입력 받아 덧셈 결과 출력하기

#include<stdio.h>

int main(void) {
	double a, b, sum;

	printf("두 실수를 입력하세요\n");
	scanf("%lf%lf",&a,&b);
	sum = a + b;
	printf("%.2lf + %.2lf = %.2lf\n",a,b,sum);

	return 0;
}