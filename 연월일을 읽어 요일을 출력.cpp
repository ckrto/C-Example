#include <stdio.h>

int main()
{
	int c, y, m, d, w, g;
	char *days[] = {"�Ͽ���", "������", "ȭ����", "������", "�����", "�ݿ���", "�����"}; //������ �迭 
	
	printf("Type YEAR MONTH DAY: ");
	scanf("%d %d %d", &g, &m, &d);
	
	c = g / 100;
	y = g % 100;
	w = (21*c)/4 + (5*y)/4 + (26*(m+1))/10 + d-1; 
	
	printf("\n%d year %d month %d day is %s", g, m, d, days[w%7]);
	
	return 0;
}
