#include<stdio.h>
int main()
{
 int n,i,j,b,c,d;
 int a[50][50]={0};
 int cnt;
 
 
 printf("숫자입력:");
 scanf("%d",&n);
 
 c=0;
 d=n/4;
 cnt=1;
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   a[i][j]=cnt++;
  }
 }
 
 for(i=0;i<d;i++)
 {
  for(j=d;j<d+(n/2);j++)
  {
   b=a[i][j];
   a[i][j]=a[n-1-i][n-1-j];
   a[n-1-i][n-1-j]=b;
  }
 }
 
 for(i=d;i<d+(n/2);i++)
 {
  for(j=0;j<d;j++)
  {
   b=a[i][j];
   a[i][j]=a[n-1-i][n-1-j];
   a[n-1-i][n-1-j]=b;
  }
 }
 
 for(i=0;i<n;++i)
  
 {
  for(j=0;j<n;++j)
  {
   printf("%3d",a[i][j]);
  }
  printf("\n");
 }
 
}  
