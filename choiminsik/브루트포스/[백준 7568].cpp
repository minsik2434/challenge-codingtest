#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
*	��ġ����
*	����� �����Կ� Ű�� �Է¹ް� ��ġ ��� ����
*	A(55,185) B(58,183) �̸� A��B�� ���� ��ġ�� ũ�ٰ� ���� �� �����Ƿ� ���� ���
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