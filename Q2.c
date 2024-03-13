	#include <stdio.h>

	unsigned long long factorial(int num) {
	    if (num == 0 || num == 1) {
		return 1;
	    } else {
		return num * factorial(num - 1);
	    }
	}

	int main() {
	    int number;

	    printf("Enter a non-negative integer: ");
	    scanf("%d", &number);

	    if (number < 0) {
		printf("Invalid input. Please enter a non-negative integer.\n");
		return 1;
	    }

	    printf("Factorial of %d = %llu\n", number, factorial(number));

	    return 0;
	}

