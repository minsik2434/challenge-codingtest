#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
/*
*	������ ���� 
*	1.�Ѱ��� �Է�
*	2.������ ���� �Է�
*	3.������ ���ݰ� �����Է�
*	4.�Ѱ��ݰ� ���� ������ yes Ʋ����no
*/
int main(void) {
	int totalprice;
	int knum;
	int price[100]={0,};
	int count[100]={0,};
	int sum = 0;
	scanf("%d", &totalprice);
	scanf("%d", &knum);
	for (int i = 0; i < knum; i++) {
		scanf("%d %d", &price[i], &count[i]);
	}

	for (int i = 0; i < knum; i++) {
		sum = sum + price[i] * count[i];
	}
	if (totalprice == sum) {
		printf("Yes");
	}
	else {
		printf("No");
	}


	return 0;
}