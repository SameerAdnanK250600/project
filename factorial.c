#include <stdio.h>

void factorial(int num, int product) {
	if (num > 0) {
		product = product * num;
		num = num - 1;
		factorial(num, product);
	} else {
		printf("%d", product);
	}
}

int main() {
	int num;
	printf("Enter number to factorial: ");
	scanf("%d", &num);
	
	factorial(num, 1);
	return 0;
}
