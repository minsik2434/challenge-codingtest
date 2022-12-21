#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max(int a, int b);

/* ��� ������
*	1.����� �ѹ��� �Ѱ�ܾ� �Ǵ� �� ��ܾ� ���� �� �ִ�
*	2.���ӵ� �� ���� ����� ��� ��Ƽ��� �ȵȴ� (�������� ��ܿ� ���� x)
*	3.������ ���� ����� �ݵ�� ��ƾ��Ѵ�
*/

int main(void) {

	int n; //��� ����
	int step[300] = { 0, }; //��� ����
	int score[300] = { 0, };// dp�迭

	scanf("%d", &n);
	int k;
	for (int i = 0; i < n; i++) {
		scanf("%d", &step[i]);
	}

	score[0] = step[0];
	score[1] = max(step[0] + step[1], step[1]);
	score[2] = max(step[1] + step[2], step[0] + step[2]);
	for (int i = 3; i < n; i++) {
		score[i] = max(score[i - 2] + step[i], step[i - 1]+step[i] + score[i-3]);
	}
	printf("%d", score[n-1]);



	return 0;
}

int max(int a, int b) {
	return a > b ? a : b;
}