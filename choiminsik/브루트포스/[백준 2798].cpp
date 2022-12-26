#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*블랙잭
	1.카드개수와 타깃값 입력
	2.타깃값보다 작고 타깃값과 가장 가까운 카드 3개의 합 출력
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