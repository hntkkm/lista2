#include <stdio.h>
#include <math.h>

int main()
{
	double liczba, pierw, iloraz=1;
	int i;

	for ( i=1; i<=1000; i++)
		{
		liczba = i;
		pierw = pow (liczba, (1.0/1000.0));
		iloraz = iloraz * pierw;
		}

	printf("Pierwiastek 1000 stopnia ze 1000! = %lf\n", iloraz);
}
