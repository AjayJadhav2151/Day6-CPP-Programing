//6.	Accept a character from user.It may be alphabet, digit or any other character.Print its ASCII value.
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
int main() {
	char ch;
	printf("Enter the Character:\n");
	scanf("%c", &ch);
	if (ch >= 'A' || ch >= 'Z' || ch >= 'a' || ch >= 'z') {
		printf("%d", ch);
	}
}