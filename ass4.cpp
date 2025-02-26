//4.	Write a program to swap two variables using a third variable and without using third variable.
#include<iostream>
int main() {
	int a, b;
	printf("Enter the value of a: \n");
	scanf_s("%d", &a);
	printf("Enter the value of b: \n");
	scanf_s("%d", &b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("swap two variables without 3rd variable is: %d %d", a, b);
}