#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int n;
	scanf("%d", &n);

	int x[50] = { 0, };
	int	y[50] = { 0, };
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x[i], &y[i]);
	}

	for (int i = 0; i < n; i++) {
		int k = 0;
		for (int j = 0; j < n; j++) {
			if (x[i] < x[j] && y[i] < y[j]) {
				k++;
			}
		}
		printf("%d ", k + 1);
	}

	return 0;
}