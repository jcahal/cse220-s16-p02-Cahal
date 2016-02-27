//
// Created by Jonathan Cahal on 2/25/16.
//

#include <stdio.h>
#include <time.h>

int main() {
	int n, count = 0;
	time_t currentTime;
	struct tm *timestamp;
	clock_t clockCount;

	// prompt for user input
	printf("Enter an integer: ");

	// if input is not an integer, exit program
	if(scanf("%d", &n) != 1) {
		printf("Invalid input, exiting\n");
		return 1;
	}

	//print timestamp
	time(&currentTime);
	timestamp = localtime(&currentTime);
	printf("Timestamp: %s\n", asctime(timestamp));


	clockCount = clock();
	while(n != 1) {
		count++;
		if((n % 2) == 0) {
			n = n / 2;
		} else {
			n = (3 * n) + 1;
		}
		printf("n = %d\n", n);
	}
	clockCount = clock() - clockCount; // calculate clocks of loop

	// print num clocks
	printf("Loop took %d iterations, %lu clocks, and %.5fms\n", count, clockCount, (((float)clockCount)/CLOCKS_PER_SEC) * 1000);

	//print timestamp
	time(&currentTime);
	timestamp = localtime(&currentTime);
	printf("Timestamp: %s", asctime(timestamp));
	return 0;
}

