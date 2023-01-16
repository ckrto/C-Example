#include <stdio.h>

int main()
{
	int c, y, m, d, w, g;
	char *days[] = {"일요일", "월요일", "화요일", "수요일", "목요일", "금요일", "토요일"}; //포인터 배열 
	
	printf("Type YEAR MONTH DAY: ");
	scanf("%d %d %d", &g, &m, &d);
	
	c = g / 100;
	y = g % 100;
	w = (21*c)/4 + (5*y)/4 + (26*(m+1))/10 + d-1; 
	
	printf("\n%d year %d month %d day is %s", g, m, d, days[w%7]);
	
	return 0;
}
