#include <stdio.h>

int main()
{
	#define n 10
	int a[n];
	
	printf("a[0..9]: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("reversed:\t");
	int i = n - 1;
	while (i >= 0)
	{
		printf("%d", a[i]);
		if (i != 0) putchar(' ');
		else
			putchar('\n');
		i--;
	}

	int s = 0;
	int p = 1;
	printf("idx\telm\tsum\tprod\n");
	for (int i = 0; i < n; i++)
	{	s += a[i];
		if  (a[i] != 0)
			p *= a[i];
		printf("%d\t%d\t%d\t%d\n", i, a[i], s, p);
	}
	printf("sum:\t%d\n", s);
	printf("prod:\t%d\n", p);


	return 0; 
}
