/* Sieve of Eratosthenes*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int N = 100;
	int Array = 98;

	
	
    int limit = 100;
    unsigned long long int i,j;
    int *primes;
    int z = 1;

    primes = malloc(sizeof(int)*limit);

    for (i=2;i<limit;i++)
        primes[i]=1;

    for (i=2;i<limit;i++)
        if (primes[i])
            for (j=i;i*j<limit;j++)
                primes[i*j]=0;

    for (i=2;i<limit;i++)
        if (primes[i])
            printf("%dth prime = %dn",z++,i);
getch();
return 0;
}
	
	
