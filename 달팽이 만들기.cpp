#include <stdio.h>

int main()
{
	int a, b, c, d, e, f;
	int m[5][5] = {0};
	
	a=0; b=1; c=0; d= -1; e=5;
	
	while(1)
	{
		for(f=1; f<=e; f++)
		{
			a++;
			d = d+b;
			m[c][d] = a;
		}
		e--;
		
		if(e<=0)
		{
		  break;
		}
		for(f=1; f<=e; f++)
		{
			a++;
			c = c+b;
			m[c][d] = a;
		}
		b *= -1;
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
