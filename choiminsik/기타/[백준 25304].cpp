#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
/*
*	영수증 문제 
*	1.총가격 입력
*	2.물건의 종류 입력
*	3.물건의 가격과 개수입력
*	4.총가격과 비교해 같으면 yes 틀리면no
*/
int main(void) {
	int totalprice;
	int knum;
	int price[100]={0,};
	int count[100]={0,};
	int sum = 0;
	scanf("%d", &totalprice);
	scanf("%d", &knum);
	for (int i = 0; i < knum; i++) {
		scanf("%d %d", &price[i], &count[i]);
	}

	for (int i = 0; i < knum; i++) {
		sum = sum + price[i] * count[i];
	}
	if (totalprice == sum) {
		printf("Yes");
	}
	else {
		printf("No");
	}


	return 0;
}