#include <stdio.h>

int main()
{
	int a[5][5];
	int i,j, counter = 0;
	
	void init_matrix(int [][5]);
	void print_matrix(int [][5]);
	
	
	init_matrix(a);
	
	
	
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
