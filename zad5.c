#include <stdio.h>

int main()
{
	double il;
	int max, a,b, i, j;

	for ( max=1; max<=1000; max++)
	{
	il=0;
		for ( i=1; i<=max; i++) 
		{
			for ( j=1; j<=i; j++)
			{
			 a=i;
			 b=j;

			while(b!=0)
			{
			int pom=a%b;
			a=b;
			b=pom;
			}


	              if(a==1)
                        {
                        if(i!=j) il=il+2;
                        else il++;
			}
			}
		}
	il=il/(max*max);
	printf("%d;%f\n",max, il);
	}
return 0;
}
