#include <stdio.h>

void main(void)
{
	int arr[10];
	int sum = 0;
	double avg=0.0;
	for (int i = 0; i < 10; i++) {
		arr[i] = (rand() % 100) + 1;	//<- 1~100���� 	//(rand()%100)+1 <- 0~100����
		printf("%d ", arr[i]);
		sum += arr[i];
	}
	avg = (double)sum / 10;
	printf("\n");
	printf("�� : %d\n", sum);
	printf("��� : %lf", avg);
}