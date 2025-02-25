#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

int CalcAreaPeri(int l, int b, int *a, int *p);

int main() {
	int len, bre, area, peri;
	printf("Enter the length and breadth\n");
	scanf("%d%d", &len, &bre);
	CalcAreaPeri(len, bre, &area, &peri);
	printf("Area is %d and Perimeter is %d\n", area, peri);
	return 0;
}

int CalcAreaPeri(int l, int b, int* a, int* p) {
	*a = l * b;
	*p = 2 * (l + b);
	return 0;
}
