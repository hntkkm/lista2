#include <stdio.h> 
#include <stdlib.h> 
#include <assert.h>

int main() { 
	div_t a_200, a_100, a_50, a_20, a_10, a_5, a_2;
	div_t b_50, b_20, b_10, b_5, b_2;
	int zl, gr;
	printf("Podaj liczbę złotych\n");
	scanf("%d", &zl);
	printf("Podaj liczbę groszy(poniżej 100)\n");
	scanf("%d", &gr);

if (zl==0 && gr==0)
printf("Nie potrzebujesz ani banknot, ani monet\n");
else{

	assert (gr <= 100);
	//banknoty
	a_200 = div (zl,200);
	a_100 = div (a_200.rem,100);
	a_50  = div (a_100.rem,50);
	a_20  = div (a_50.rem, 20);
        a_10  = div (a_20.rem,10);	
	//monety
        a_5   = div (a_10.rem,5);
	a_2   = div (a_5.rem,2);

	b_50  = div (gr,50);
	b_20  = div (b_50.rem, 20);
        b_10  = div (b_20.rem,10);
        b_5   = div (b_10.rem,5);
	b_2   = div (b_5.rem,2);

printf("Banknoty:\n%d *200 zł\n%d *100 zł\n%d *50 zł\n%d *20 zł\n%d *10 zł\n",\
		a_200.quot,a_100.quot,a_50.quot,a_20.quot,a_10.quot);

printf("Monety:\n%d *5 zł\n%d *2 zł\n%d *1 zł\n",a_5.quot,a_2.quot,a_2.rem);

printf("%d *50 gr\n%d *20 gr\n%d *10 gr\n %d *5 gr\n %d *2 gr\n %d *1 gr\n",\
		b_50.quot, b_20.quot, b_10.quot, b_5.quot, b_2.quot, b_2.rem);
}
	return 0;
  }
