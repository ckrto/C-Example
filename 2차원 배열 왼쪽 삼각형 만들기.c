#include <stdio.h>

int main()
{
	int a[5][5];
	int i,j, counter = 0;
	
	void init_matrix(int [][5]); //2���� �迭 �ʱ�ȭ�ϴ� �Լ� 
	
	
	init_matrix(a); // �Լ� ȣ��  
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			a[i][j] = 0;
		}
	}
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<i+1; j++)
		{
			counter++;
			a[i][j] = counter;
		}
	}
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%3d", a[i][j]);
		}
		putchar('\n');
	}
	
	
	return 0;
}

void init_matrix(int a[][5])  //2���� �迭 �ʱ�ȭ�ϴ� �Լ� ����(2������쿣 2��° �迭 ũ�� ��� �ʿ�) 
{
	int i, j;
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			a[i][j] = 0;
		}
	}
}
