#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 1000000

/*
* ������
* ��� k�� k�� �� �ڸ����� ���� ����¼��� ������ k�� �����ռ��� ������
* n�� �Է¹ް� n�� ����� ���� ���� �����ڸ� ã�ƶ�
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