#include <stdio.h>
#include <stdlib.h>
int main()
{
	char s[512] = "Great";
	char t[] = "Woosuk";
	char *u = "University";
	char *v;
	
	char * my_strcat(char *, char *);
	
	v = my_strcat(s, t);
	printf(v);
	
}




char * my_strcat(char *s, char *t)
{
	char *u, *x;
	
	u = (char *)malloc(sizeof(s)+sizeof(t)+1);
	x = u;
	
	while(*s) *x++ = *s++;
	while(*t) *x++ = *t++;
	*x = '\0';
	
	return(u);
}
