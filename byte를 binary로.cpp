#include <stdio.h>
#define RIGHT 0
#define LEFT 1

int main()
{
	unsigned char c;
	void print_byte2bin(unsigned char);
	void rotate_bits(unsigned char *, int, int);
	
	c = getchar();  // c=0xF6;
	print_byte2bin(c);
	//rotate_bits(&c, RIGHT, 3);
	print_byte2bin(c);
	rotate_bits(&c, LEFT, 2);
	print_byte2bin(c);
	
}

void print_byte2bin(unsigned char c)
{
	int mask=0x80, n=8;
	
	while(n--)  //for int i=0 ~ 7까지랑 똑같은 표현 
	{
		if(c&mask)  //비트와이즈 AND 연산 비트를 비교? 
		{
			putchar('1');
		}
		else 
		{
			putchar('0');
			mask = mask >> 1;
		}
	}
	putchar('\n');
}

void rotate_bits(unsigned char *c, int dir, int n)
{
	int lmask = 0x80, rmask = 0x01;
	unsigned char tmp;
	
	if(dir==LEFT)
	{
		while(n--)
		{
			tmp = *c & lmask;
			*c = *c<<1;
			if(tmp) *c = *c | rmask;
		}
		
	}
	else
	{
		while(n--)
		{
			tmp = *c & rmask;
			*c = *c<<1;
			if(tmp) *c = *c | lmask;
		}
	}	
}
