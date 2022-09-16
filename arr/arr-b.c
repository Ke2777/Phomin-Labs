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
	for (int i = 0; i < n; i++)
		s += a[i];
	printf("sum:\t%d\n", s);

	return 0; 
}
