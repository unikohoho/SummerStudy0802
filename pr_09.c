// 사용자로부터 투입한 돈과 물건의 가격을 입력 받아 거스름돈을 동전으로 계산하여 출력하는 자판기 프로그램
// 동전은 500원, 100원만 있다고 가정한다. 
#include<stdio.h>

int main(void) {
	//변수 선언 : 투입된 돈, 물건의 가격, 거슬러줘야 할 금액, 거스름돈(500원 갯수, 100원 갯수)
	int money, price, rest, numof500, numof100;
	//투입된 돈, 물건의 가격 입력받기
	printf("투입한 금액 : ");
	scanf("%d", &money);
	printf("물건의 가격 : ");
	scanf("%d", &price);

	//거스름돈 파악 알고리즘
	rest = money - price;
	numof500 = rest / 500;
	numof100 = (rest % 500) / 100;

	//출력
	printf("거스름돈 500원 갯수 : %d\n", numof500);
	printf("거스름돈 100원 갯수 : %d\n", numof100);

}