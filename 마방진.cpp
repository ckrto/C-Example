#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, n, k, *a;
	
	do{
		scanf("%d", &n);
	}while(!(n%2));
	a = (int *)malloc(sizeof(int) * n * n);
	
	i=0; j=n/2;
	for(k=1; k<=n*n; k++)
	{
		a[i*n+j] = k;
		if(k%n)  //n�� ����϶� ������ �밢�� ���� �����ٴ� Ư�� �̿� 
		{
			i--;
			j++;
			if(i<0) i = n-1;
			if(j>=n) j = 0;
		}
		else
		{
			i++;
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			printf("%3d", a[i*n+j]);
		}
		putchar('\n');
	}
	return 0;
}
