#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 1000000

/*
* 분해합
* 어떤수 k와 k의 각 자리수를 더해 만드는수가 분해합 k는 분해합수의 생성자
* n을 입력받고 n을 만드는 가장 작은 생성자를 찾아라
*/
int main(void) {
	int n;
	int result = 0;
	scanf("%d", &n);
	
	for (int i = 1; i < n; i++) {
		int number = i;
		int sum = 0;
		while (number > 0) {
			sum =sum+ number % 10;
			number = number / 10;
		}
		if (sum+i == n) {
			result = i;
			break;
		}
		
	}

	printf("%d", result);

	return 0;
}