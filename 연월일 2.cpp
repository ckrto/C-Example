#include <stdio.h>

int main()
{
	int y, m, d;
	int i, tot, w;
	int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	char days[7][4] = {"��", "��", "ȭ", "��", "��", "��", "��"};
	
	printf("�� �� �� �Է�: ");
	scanf("%d %d %d", &y, &m, &d);
	
	tot=0;
	for(i=1; i<y; i++)
	{
		tot++;  //because 365%7==1
		if((!(i%4) && (i%100)) || !(i%400)) tot++;
	}
	for(i=1; i<m; i++)
	{
		tot += months[i];
		if(m==2)
		{
			if((!(y%4) && (y%100)) || !(y%400)) tot++;
		}
	}
	tot += d;
	
	w = tot % 7;
	
	printf("%d�� %d�� %d���� %s�����Դϴ�.\n", y, m, d, days[w]);
	return 0;
} 
