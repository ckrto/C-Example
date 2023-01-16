#include <stdio.h>

int main()
{
	int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	int y,m,d;
	int my_year, my_month, my_day;

	int i;
	int last_year_sum = 1;

	printf("오늘 날짜를 입력하세요. (year/month/day) ");
	scanf("%d %d %d", &y, &m, &d);

	printf("태어난 날짜를 입력하세요. (year/month/day) ");
	scanf("%d %d %d", &my_year , &my_month , &my_day);

	for(i = my_year + 1 ; i < y ; i++) //시작과 끝년도 빼고 윤년 sum += 1
	{
		if( (i % 400 == 0) || (i % 4 == 0) && (i % 100 != 0) ) last_year_sum++;
	}

	last_year_sum += (y - my_year - 1) * 365; // 시작과 끝년도 빼고 * 365

	if( (my_year % 400 == 0) || (my_year % 4 == 0) && (my_year % 100 != 0) )
	{ //시작년도 윤년 달 판단 sum += 1
		if(my_month >= 2)
		last_year_sum++;
	}

	for( i = my_month + 1 ; i <= 12 ; i++ ) //시작년도의 달 날짜 계산
	{
		last_year_sum += month[i];
	}

	last_year_sum += (month[my_month] - my_day); //시작달의 날짜 계산


	if( ( y % 400 == 0) || (y% 4 == 0) && (y % 100 != 0) )
	{ //시작년도 윤년 달 판단 sum += 1
		if( m >= 2) last_year_sum++;
	}

	for( i = 1 ; i <= m -1 ; i++ ) //시작년도의 달 날짜 계산
	{
		last_year_sum += month[i];
	}

	last_year_sum += d; //시작달의 날짜 계산

	printf(">> 당신은 %d일째 살고있습니다.\n",last_year_sum);

	return 0;
}

