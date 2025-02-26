//5.	Write a program to calculate Net Salary of an employee.
// Accept Basic Salary(BS) from the user.HRA is 15 % of BS										
// DA is 30 % of BS											
// PF is 12.5 % of GS										
// Gross Salary is BS + HRA + DA									
// Net Salary = Gross Salary – PF
#include<iostream>
int main() {
	int HRA, DA, PF, BS, GS, NS;
	printf("Enter the Basic Salary:\n");
	scanf_s("%d", &BS);
	HRA = BS * 15 / 100;
	printf("Your HRA salary is:%d\n", HRA);
	DA = BS * 30 / 100;
	printf("Your DA salary is:%d\n", DA);
	GS = BS + HRA + DA;
	printf("Gross salary is :%d\n", GS);
	PF = GS * 12.5 / 100;
	printf("Your PF salary is:%d\n", PF);
	NS = GS - PF;
	printf("Your Net Salary is:%d\n", NS);
}