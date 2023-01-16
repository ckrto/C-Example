#include <stdio.h>

int main()
{
	
}

#define BASE 16

void myrpintbin(int n)
{
	unsigned int b = 1;

	while (n>b) b = b*8;
	b = b/8;
g
	while(b) {
		if(n>=b) {
			putchar('0' + n/b);  //2~10Áø¹ý
			n = n - n/b*b;
		}else{
			putchar('0');
		}
		b = b / 8;
	}
	putchar('\n');
}


void myprintbinshift(int n)
{
	unsigned int mask = 0x8000000;
	int start_flag = 0;
	
	while(mask){
		if(mask & n){
			putchar('1'); start_flag = 1;
		}
		else{
			if(start_flag) puthcar('0');
		}
		mask = mask >> 1;
	}
	putchar('\n');
}
