#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max(int a, int b);

/* 계단 오르기
*	1.계단은 한번에 한계단씩 또는 두 계단씩 오를 수 있다
*	2.연속된 세 개의 계단을 모두 밟아서는 안된다 (시작점은 계단에 포함 x)
*	3.마지막 도착 계단은 반드시 밟아야한다
*/

int main(void) {

	int n; //계단 개수
	int step[300] = { 0, }; //계단 점수
	int score[300] = { 0, };// dp배열

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