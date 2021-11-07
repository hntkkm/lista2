#include <stdio.h> 

int main()
{
	int n=0, i=1;
	double suma=0;

	while (suma<=10)
	{
	 suma=suma+(1.0/i);
	 i=i+1;
	 n=n+1;
	}

	//printf("%f",suma);
	printf("Najmniejsza potrzebna liczba = %d\n", n);
return 0;
}
