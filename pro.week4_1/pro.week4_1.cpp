#include<stdio.h>
int main() {
	int n[10];
	float x;
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &n[i]);
		printf("%d ", n[i]);
	}
	x = n[0] + n[1] + n[2] + n[3] + n[4] + n[5] + n[6] + n[7] + n[8] + n[9];
	printf("\nAverage Height is %.3f", x / 10);


}