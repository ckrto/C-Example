#include <stdio.h>

int main() 
{
	char c;
	int lineno=1;
	FILE *fp;

	if((fp=fopen("C:/Users/asd95/Desktop/MyFolder_U/���α׷��� ����/���־�2017/���α׷��ֿ���1126/text.txt", "rt"))==NULL)
	{
		fprintf(stderr, "Cannot open file\n");
		exit(-1);
	}
	
	while((c=fgetc(fp)) != EOF)
	{
		fputc(c, stdout);
		if(c=='\n')
		{
			linfeno++; printf("%5d: ", lineno);
		}
	}
	
	fclose(fp);
	fprintf(stderr, "Program Terminated.\n");
}
