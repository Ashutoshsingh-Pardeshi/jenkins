#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main()
{
	char ar[100] ;
	int i, temp, n, sum;

	for (i=0;i<=100;i++)
	{
		ar[i] = 0;
	}

	sum = 0 ;
	printf("How many elements do yoy want in you array?\n Answer :- ");
	scanf("%d", &n);

	for (i=0;i<n;i++)
	{
		printf("Enter the value of ar[%d] : ", i) ;
		scanf("%d", &ar[i]) ; 
	}
	return 0;
}
