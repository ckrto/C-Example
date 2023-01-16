#include <stdio.h>

int main()
{
	int point;
	char grade;
	
	scanf("%d", &point);
	
	if((point<=100) && (point>=90)) grade = 'A';
	else if((point<90) && (point>=80)) grade = 'B';
	else if((point<80) && (point>=70)) grade = 'C';
	else if((point>100) || (point<0)) grade = 'N';
	else grade = 'F';
	
	 
} 
