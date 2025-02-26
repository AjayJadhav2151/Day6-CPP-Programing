//3.	Write a program to add two numbers and store the result in a third variable.Print the result.
#include<iostream>
int main() {
	int num1, num2, num3;
	printf("Enter the 1st number:\n");
	scanf_s("%d", &num1);
	printf("Enter the 2nd number:\n");
	scanf_s("%d", &num2);
	num3 = num1 + num2;
	printf("Result is: %d", num3);
}