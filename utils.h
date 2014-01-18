#include<stdlib.h>
#include <time.h>
void wyswietlanie(int *tab)
{
	int i;
	
	for( i=0;i<10;i++)
	{
		
		printf("%d",tab[i]);
	}

}
int sumuj(int *tab)
{
	int suma =0;
	int i=0;
	for(i;i<10;i++)
	{
		suma+=tab[i];

	}
	return suma;
}
