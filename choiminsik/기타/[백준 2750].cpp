#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void swap(int a[], int index1, int index2);
int getindex(int a[], int start, int end);
int main(void) {

	int n;
	int number[1000];
	int max_i;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &number[i]);
	}
	for (int i = 0; i < n; i++) {
		max_i = getindex(number, i, n - 1);
		swap(number, max_i, i);
	}

	for (int i = 0; i < n; i++) {
		printf("%d ",number[i]);
	}
	return 0;
}

int getindex(int a[], int start, int end) {
	int min_i = start;
	for (int i = start; i <= end; i++) {
		if (a[min_i] > a[i]) {
			min_i = i;
		}
	}

	return min_i;
}
void swap(int a[],int index1, int index2) {
	int tmp;
	tmp = a[index1];
	a[index1] = a[index2];
	a[index2] = tmp;
}