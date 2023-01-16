#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char s[] = "Epic";
	char *t = "Games";
	char *v;
	void my_strRev(char *);
	
	my_strRev(t);
	printf(t);
}

void my_strRev(char *s)
{
	char *x, *y, tmp; int i;
	
	x=s; y=s + strlen(s)-1;
	while(x<y)
	{
		tmp=*x; *x=*y; *y=tmp; x++; y--;
	}
	
}
