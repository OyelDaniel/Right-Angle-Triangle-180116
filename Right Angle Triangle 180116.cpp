#include "stdio.h"
int main ()
{
	int i;
	for(i=1; i<6; i++)
    {
    	for(int j=1; j<=i; j++)
		printf(" * ");
    	printf("\n");
	    
	}
	return 0;
}
