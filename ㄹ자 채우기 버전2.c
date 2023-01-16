#include <stdio.h>

int main()
{
	int a[5][5];
	int i,j, counter = 0;
	int l=0, m=4, n=1, p;
	int toggle = 1;
	
	void init_matrix(int [][5]);
	void print_matrix(int [][5]);
	
	
	init_matrix(a);
	
	for(i=0; i<5; i++)
	{
		if(n>0)
		{
			for(j=l; j<=m; j=j+n)
			{
				counter++;
				a[i][j] = counter;
			}
		}
		else
		{
			for(j=l; j>=m; j=j+n)
			{
				counter++;
				a[i][j] = counter;
			}
		}
		/*
		if(i<2)
		{
			l--;
			m++;
		}
		else
		{
			l++;
			m--;
		}
		*/ 
		
		p=l; l=m; m=p;
	}
	
	print_matrix(a);
	return 0;
}

void init_matrix(int a[][5])
{
	int i,j = 0;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			a[i][j] = 0;
		}
	}
}

void print_matrix(int a[][5])
{
	int i,j = 0;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%3d", a[i][j]);
		}
		putchar('\n');
	}
}
