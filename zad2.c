#include <stdio.h>

int main()
{
	int n,el;
	float suma=0;

	printf("Ilość elementów:\n");
	scanf("%d",&n);

	if (n==0) printf("Nie da się tego obliczyć\n");

	for (int i=0; i<n; i++)
	{
	scanf("%d",&el);
	suma=suma+el;
	}

	suma=suma/n;

printf("Średnia arytmetyczna elementow= %f\n", suma);
return 0;
}
