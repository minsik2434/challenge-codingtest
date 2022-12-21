#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	MCSS알고리즘 동적계획법
	최대 부분합 문제
*/
int Max(int a, int b);
int main(void) {

	int n;
	int number[100000] ={0,};
	int sum[100000] ={0,};
	int max;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &number[i]);
	}

	sum[0] = number[0];
	max = number[0];
	for (int i = 1; i < n; i++) {
		sum[i] = Max(sum[i - 1] + number[i], number[i]);
		max = Max(sum[i], max);
	}
	printf("%d", max);
	return 0;
}


int Max(int a, int b) {
	return a > b ? a : b;
}