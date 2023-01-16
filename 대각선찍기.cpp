#include <stdio.h>

int main()
{
	
	int i, j, s;
	int m[5][5] = {0};
	int ex = 0;
	
	for(i=0; i<=8; i++)
	{
		for(j=0; j<=4; j++)
		{
			s = i-j;
			if(s<0) continue;
			if(s>4) continue;
			ex++;
			m[j][s] = ex;
		}
	}
	
	for(int p=0; p<=4; p++)
	{
		for(int q=0; q<=4; q++)
		{
			printf("%3d", m[p][q]);
		}
		putchar('\n');
	}
	return 0;
}
