#include<stdlib.h>
#include <time.h>
int* generator()
{	int tab[10];
	
	int	wylosowana_liczba;
	srand( time( NULL ) );
	int i;
	for( i=0;i<10;i++)
	{
		 wylosowana_liczba =( rand() % 100 ) + 0;
		tab[i]=wylosowana_liczba;
		
	}
	return tab;
}
