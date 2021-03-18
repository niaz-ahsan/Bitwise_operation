/*
 ============================================================================
 Name        : bitwise_operation.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a, b;
	printf("Enter 1st number: ");
	scanf("%d", &a);

	printf("Enter 2nd number: ");
	scanf("%d", &b);

	printf("Bitwise AND: %d\n", a & b);
	printf("Bitwise OR: %d\n", a | b);
	printf("Bitwise XOR: %d\n", a ^ b);
	printf("Negation of A: %d\n", ~a);

	return 0;
}
