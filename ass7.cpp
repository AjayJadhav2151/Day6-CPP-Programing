//7.	Write a program to find leap year by using:
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

//a. if - else and logical operators(&& and || )
//int main() {
//	int year;
//	printf("Enter the Year : ");
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
//		printf("is a Leap year");
//	}
//	else {
//		printf("is not a Leap year");
//	}
//}

//b.Conditional Operators(? : )	
int main() {
	int year;
	printf("Enter the Year : ");
	scanf("%d", &year);
	(year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ) ? printf("is a Leap year\n") : printf("is not a Leap year\n");
	return 0;
}