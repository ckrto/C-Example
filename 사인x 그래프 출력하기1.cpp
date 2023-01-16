#include <stdio.h>
#include <math.h>

int main()
{
	int i;
	double x, y;
	
	for(x=0.0; x<2*3.14; x+=0.15)
	{
		y=sin(x);
		for(i=-40; i<y*30; i++)
		{
			putchar(' ');
		}
		putchar('*');
		putchar('\n');
	}
}
