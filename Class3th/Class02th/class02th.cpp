#include <stdio.h>
int main() {
	int a = 3;
	int b = 4;
	int c = 5;
	int d = 6;
	float e = 1.5;
	printf("%d*%d=%d\n",a, b,a*b);

	printf("%d / %d = %f\n", c, a,(float) c / a);

	printf("%d * %g = %g\n", d, e, d * e);

	printf("%d * %f = %f\n", d, e, d * e);

	return 0;
}