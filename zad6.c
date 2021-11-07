#include <stdio.h>

int main ()
{
	int liczba[1001];
	int n,m;

	for (m=1; m<=1000; m++)
	{
		liczba[m]=0;
		for (n=1; n<m; n++)
		if (m%n==0) liczba[m]=liczba[m]+n;
		//printf("%d  %d\n", n, liczba[n]);

	}

	printf("Liczby doskonałe to:\n");
	for (m=1; m<=1000; m++)
		if (m==liczba[m])
		printf("%d\n", m);

	printf("Liczby zaprzyjaźnione to:\n");
	for (m=1; m<=1000; m++)
		for (n=1; n<m; n++)
		if (liczba[m]==n)
		if (liczba[n]==m)
		printf("(%d;%d)\n",n,m);
}
