//10.	Write a program to find maximum of three numbers using conditional operators.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main() {
	int a, b, c, max;
	printf("Enter the a:");
	scanf("%d", &a);
	printf("Enter the b:");
	scanf("%d", &b);
	printf("Enter the c:");
	scanf("%d", &c);
	
	if (a > b) {
		if (a > c) {
			max = a;
		}
		else {
			max = c;
		}
	}
	else {
		if (b > c) {
			max = b;
		}
		else {
			max = c;
		}
	}
	
	printf("Maximum value is: %d ", max);
}