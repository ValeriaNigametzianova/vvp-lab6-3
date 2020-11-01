#include<stdio.h>

int main()
{
	float A = 2.54, B = 5, C = B/2;
	float t;
	t = A;
	A = B;
	B = C;
	C = t;
	printf("A=%.3lf, B=%.3lf, C=%.3lf", A, B, C);
	return 0;
}
