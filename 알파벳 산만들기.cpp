#include <stdio.h>

int main()
{
	int i, j;
	
	for(i=0; i<26; i++)
	{
		for(j=0; j<26-i; j++) //���ĺ� ���� ��� ���Ľ�Ű�� ���� ���� �߰� 
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
