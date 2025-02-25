//9.	Using switch - case construct, write a menu driven program to perform basic calculations(addition, subtraction, multiplication and division) on two user entered numbers.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main() {
	char ch;
	int num1, num2, num3;
	printf("Enter the first value: ");
	scanf("%d", &num1);
	printf("Enter the second value: ");
	scanf("%d", &num2);
	printf("\t\t\t\t Select Operators \t\t\t\t\n");
	printf("For Addition use '+' \n");
	printf("For Subtraction use '-' \n");
	printf("For Multiplication use '*' \n");
	printf("For Division use '/' \n");
	printf("For Remainder use '%%' \n");
	printf("Enter the Operators: ");
	scanf(" %c", &ch);
	switch (ch) {
	case '+': {
		num3 = num1 + num2;
		printf("Addition of two number is : %d", num3);
		break;
	}
	case '-': {
		num3 = num1 - num2;
		printf("Subtraction of two number is : %d", num3);
		break;
	}
	case '*': {
		num3 = num1 * num2;
		printf("Multiplication of two number is : %d", num3);
		break;
	}
	case '/': {
		num3 = num1 / num2;
		printf("Division of two number is : %d", num3);
		break;
	}
	case '%': {
		num3 = num1 % num2;
		printf("Remainder of two number is : %d", num3);
		break;
	}
	default: {
		printf("Invalid operator");
		break;
	}
	}
	//printf("Result of two number is : %d", num3);
	return 0;
}
