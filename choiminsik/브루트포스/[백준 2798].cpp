#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*����
	1.ī�尳���� Ÿ�갪 �Է�
	2.Ÿ�갪���� �۰� Ÿ�갪�� ���� ����� ī�� 3���� �� ���
*/

int main(void) {
	int n, m;
	int number[100] ={0,};
	int max = 0;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		scanf("%d", &number[i]);
	}
	for (int i = 0; i < n-2; i++) {
		for (int j = i + 1; j < n-1; j++) {
			for (int k = j + 1; k < n; k++) {

				int sum = number[i] + number[j] + number[k];

				if (max<sum && sum<=m) {
					max = sum;
				}
			}
		}
	}

	printf("%d", max);
	
	return 0;
}