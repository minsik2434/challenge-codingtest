#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int min(int a, int b);
int dp[1000000];
/*
	1 �����
	1. 3���� ����������� 3���� ������
	2. 2�� ����������� 2�� ������
	3. 1�� ����
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