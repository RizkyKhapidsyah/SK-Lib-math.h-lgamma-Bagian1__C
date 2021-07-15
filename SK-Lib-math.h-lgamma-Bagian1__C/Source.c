#include <stdio.h>      /* printf */
#include <math.h>       /* lgamma */
#include <conio.h>

int main() {
	double x, hasil;
	x = 1.5;
	hasil = lgamma(x);
	printf("lgamma(%f) = %f\n", x, hasil);
	_getch();
	return 0;
}