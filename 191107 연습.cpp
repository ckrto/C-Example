#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFSIZ 512 

int main()
{
	char s[BUFFSIZ] = "Great";
	//char s[BUFFSIZ] = {'G', 'r', 'e', 'a', 't', '\0'}; ������ �� �ھ� ���� ���־��.. 
	char t[] = "woosuk";  //�����Ϸ��� �迭�� ũ�⸦ �˾Ƽ� ����ش�. 
	char *u = "University";
	char *v;
	
	int my_strcmp(char *, char *);
	int my_strlen(char *);
	char * my_strcat(char *, char *);
	
	
	printf(s);
	printf(t);
	printf(u); 
	
	if(strcmp(s, t)== -1) printf(s);
	printf("\nlength=%d", strlen(s));
	v = strcat(s, t);
	printf(v);
}

int my_strlen(char *s)
{
	int n = 0;
	
	while(*s++) n++;
	return(n);
}

int my_strcmp(char *s, char *t)
{
	while(*s == *t){s++; t++;}
	if(!*s && !*t) return(0);
	
	if(!*s) return(-1);
	if(!*t) return(1);
	return((*s<*t)?-1:1);
}
