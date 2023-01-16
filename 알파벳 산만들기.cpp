#include <stdio.h>

int main()
{
	int i, j;
	
	for(i=0; i<26; i++)
	{
		for(j=0; j<26-i; j++) //알파벳 산을 가운데 정렬시키기 위한 공백 추가 
		{
			putchar(' ');
		}
		for(j=0; j<=i; j++)
		{
			putchar('A'+j);
			putchar(' ');
		}
		putchar('\n');
	}
	
	
}
