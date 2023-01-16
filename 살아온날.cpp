#include <stdio.h>

int main()
{
	int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int y,m,d;
	int my_year, my_month, my_day;

	int i;
	int last_year_sum = 1;

	printf("���� ��¥�� �Է��ϼ���. (year/month/day) ");
	scanf("%d %d %d", &y, &m, &d);

	printf("�¾ ��¥�� �Է��ϼ���. (year/month/day) ");
	scanf("%d %d %d", &my_year , &my_month , &my_day);

	for(i = my_year + 1 ; i < y ; i++) //���۰� ���⵵ ���� ���� sum += 1
	{
		if( (i % 400 == 0) || (i % 4 == 0) && (i % 100 != 0) ) last_year_sum++;
	}

	last_year_sum += (y - my_year - 1) * 365; // ���۰� ���⵵ ���� * 365

	if( (my_year % 400 == 0) || (my_year % 4 == 0) && (my_year % 100 != 0) )
	{ //���۳⵵ ���� �� �Ǵ� sum += 1
		if(my_month >= 2)
		last_year_sum++;
	}

	for( i = my_month + 1 ; i <= 12 ; i++ ) //���۳⵵�� �� ��¥ ���
	{
		last_year_sum += month[i];
	}

	last_year_sum += (month[my_month] - my_day); //���۴��� ��¥ ���


	if( ( y % 400 == 0) || (y% 4 == 0) && (y % 100 != 0) )
	{ //���۳⵵ ���� �� �Ǵ� sum += 1
		if( m >= 2) last_year_sum++;
	}

	for( i = 1 ; i <= m -1 ; i++ ) //���۳⵵�� �� ��¥ ���
	{
		last_year_sum += month[i];
	}

	last_year_sum += d; //���۴��� ��¥ ���

	printf(">> ����� %d��° ����ֽ��ϴ�.\n",last_year_sum);

	return 0;
}

