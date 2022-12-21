#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
*	덩치문제
*	사람의 몸무게와 키를 입력받고 덩치 등수 나열
*	A(55,185) B(58,183) 이면 A와B는 누가 덩치가 크다고 말할 수 없으므로 같은 등수
*/
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