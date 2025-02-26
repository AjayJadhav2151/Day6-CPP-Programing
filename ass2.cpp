//2.	Write a program to accept marks of five subjects from the user and calculate their average.Use implicit and explicit type conversion.
#include<iostream>
using namespace std;
int main() {
	int s1, s2, s3, s4, s5;
	cout << "Enter the first  subject Marks" << endl;
	scanf_s("%d", &s1);
	cout << "Enter the 2nd  subject Marks" << endl;
	scanf_s("%d", &s2);
	cout << "Enter the 3rd  subject Marks" << endl;
	scanf_s("%d", &s3);
	cout << "Enter the 4th  subject Marks" << endl;
	scanf_s("%d", &s4);
	cout << "Enter the 5th  subject Marks" << endl;
	scanf_s("%d", &s5);
	
	float average = (s1 + s2 + s3 + s4 + s5 ) / 5;
	cout << average << endl;
}