#include <stdio.h>

int main()
{
	int i,j;
	
	for(i=0; i<26; i++)  //여기서 i는 줄 바꿈의 역할만 수행한다. 
	{
		for(j=0; j<26-i; j++)  //첫째줄은 26-0 만큼 j가 1씩 증가하면서 알파벳과 공백을 출력 
		{					   //둘째줄은 26-1 만큼 
			putchar('a'+j);
			putchar(' ');
		}					   //마지막줄은 26-25만큼 
		putchar('\n');
	}
} 
