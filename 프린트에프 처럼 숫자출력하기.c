#include <stdio.h>

int main()
{
	int n;
	void print_int(int);
	
	scanf("%d", &n);
	printf("%d\n", n);
	print_int(n);
	
}

void print_int(n)
{
	int pow10 = 1, dcount = 0;
	
	while(pow10<n)
	{
		pow10 *= 10;
		dcount++;
	}
	pow10 /= 10;
	dcount--;
	
	while(pow10)
	{
		putchar('0' + n/pow10);
		n = n % pow10;
		if(!(dcount%3) && dcount)
		{
			putchar(',');
		}
		pow10 /= 10; 
		dcount--; 
	}
}
