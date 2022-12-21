#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int min(int a, int b);
int dp[1000000];
/*
	1 만들기
	1. 3으로 나누어떨어지면 3으로 나눈다
	2. 2로 나누어떨어지면 2로 나눈다
	3. 1을 뺀다
*/
int main(void) {

	int n;
	scanf("%d", &n);

	dp[1] = 0;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0) {
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}
		if (i % 3 == 0) {
			dp[i] = min(dp[i], dp[i / 3]+1);
			
		}
	}
	printf("%d", dp[n]);

	return 0;
}

int min(int a, int b) {
	if (a < b) return a;
	else return b;
}