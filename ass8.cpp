//8.	Write a program to accept the basic salary and total sales amount for a salesperson and calculate commission according to sales amount.Display the net salary and commission earned. (Net Salary = Basic Salary + Commission) The range is as follows.
//Sales Amount in Rupees	Commission on Sales
//5000 to 7500	3 %
//7501 to 10500	8 %
//10501 to 15000	11 %
//15000 and above	15 %

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

int main() {
	int basic_sal, total_sal, net_sal, comm=0;
	printf("Enter the basic salary:");
	scanf("%d", &basic_sal);
	printf("Enter the total sales:");
	scanf("%d", &total_sal);
	if (total_sal >= 5000 && total_sal <= 7500) {
		comm = total_sal * 3 / 100;
	} else if (total_sal >= 7501 && total_sal <= 10500) {
		comm = total_sal * 8 / 100;
	} else if (total_sal >= 10501 && total_sal <= 15000) {
		comm = total_sal * 11 / 100;
	} else if (total_sal >= 15000) {
		comm = total_sal * 15 / 100;
	}

	net_sal = basic_sal + comm;
	printf("Net Salary is : %d", net_sal);
}