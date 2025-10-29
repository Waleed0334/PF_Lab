#include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max) {
	*min = arr[0];
	*max = arr[0];
	for (int i = 1; i < size; i++) {
		if (arr[i] < *min) {
			*min = arr[i];
		}
		if (arr[i] > *max) {
			*max = arr[i];
		}
	}
}

int analyze(int arr[], int size) {
	int min, max;
	int sum = 0;
	findMinMax(arr, size, &min, &max);
	for (int i = 0; i < size; i++) {
		sum = sum + arr[i];
	}
	printf("Minimum : %d\n", min);
	printf("Maximum : %d\n", max);
	return sum;
}

int main() {
	int num, size = 5;
	int arr[5];
	int sum;
	for(int i = 0; i < size; i++) {
		printf("Enter the %d number\n", i+1);
		scanf("%d", &num);
		arr[i] = num;
	}
	
	sum = analyze(arr, size);
	printf("SUM OF ARRAY: %d\n", sum);
	
	return 0;
}