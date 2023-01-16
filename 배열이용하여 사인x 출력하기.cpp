#include <stdio.h>
#include <math.h>

int main()
{
	char matrix[26][80];
	int i, j;
	for(i=0; i<25; i++)
	{
		for(j=0; j<80; j++)
		{
			matrix[i][j] = ' ';
		}
		
	}
	
	for(j=0; j<80; j++)
	{
		i = 12 - 12 * sin(3.14*j/40);
		matrix[i][j] = '*';
	}
	
	
	for(i=0; i<25; i++)
	{
		for(j=0; j<80; j++)
		{
			putchar(matrix[i][j]);
		}
		putchar('\n');
	}
}
