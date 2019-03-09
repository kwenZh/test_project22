#include<stdio.h>
#include<math.h>

int isPrimeNumber_1(int num);
int isPrimeNumber_2(int num);

int isPrimeNumber_2(int num) {
	int i;

	for(i = 2; num % i; i++);
	
	return i >= num ? 1 : 0;
}

int isPrimeNumber_1(int num) {
	int i;

	for(i = 2; i <= (int)sqrt(num); i++) {
		if(num % i == 0) {
			return 0;
		}
	}

	return 1;
}

int main(void) {
	int i;
	int j;
	int num = 1000000;
	int count = 0;
	long before_time;
	long after_time;
	long total_Time;

// before_time = clock();
	for(i = 2; i <= num; i++) {
		int result = isPrimeNumber_1(i);
		if(result) {
			printf("%d ", i);
		}
		count  += result == 1 ? 1 : 0;
	}
// after_time = clock();
// total_Time = after_time - before_time;
	printf("count = %d\n", count);
	// printf(" %ld.%03ld seconds\n", total_Time / 1000, total_Time % 1000);
	
	return 0;
}