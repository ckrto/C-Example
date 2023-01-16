#include <stdio.h>

int main()
{
        int ma[100][100]={0,};
        int n;
        int i,j;
        int count=1,temp;
        int k;

        scanf("%d",&n);

        if (n%2!=1)
                for (i=0;i<n;i++)
                        for (j=0;j<n;j++,count++)
                                ma[i][j]=count;

        if (n%4==0)
        {
                for (i=0;i<n/2;i++)
                        for (j=0;j<n;j++)
                        {
                                if  ( ( (j>=3*n/4)&&(i<n/4) )  ||
                                      ( (i<n/4)&&(j<n/4)    )     ||
                                      ( (i>=n/4)&&(j>=(n/4))&&(j<(3*n/4)) )  )
                                {
                                        temp=ma[i][j];
                                        ma[i][j]=ma[n-1-i][n-1-j];
                                        ma[n-1-i][n-1-j]=temp;
                                }
                        }
        }

        else if ((n==2)||(n<=0))
                printf("ERROR!\n");

        else if (n%2==0)
        {
                k=(n-2)/4;
                for (i=0;i<n;i++)
                        for (j=0;j<n;j++)
                        {
                                if (  ( (j>k)&&(j<(n-k-1))&&(i<=k) )  ||
                                      ( (i>k)&&(i<(n-k-1))&&(j<=k) )   )
                                {
                                        temp=ma[i][j];
                                        ma[i][j]=ma[n-1-i][n-1-j];
                                        ma[n-1-i][n-1-j]=temp;
                                }
                        }

                for (i=0;i<n;i++)
                        for (j=0;j<n;j++)
                        {
                                if ((j==n-k-1)&&(i>k)&&(i<n/2))
                                {
                                        temp=ma[i][j];
                                        ma[i][j]=ma[n-1-i][j];
                                        ma[n-1-i][j]=temp;
                                }
                        }

                for (i=0;i<n;i++)
                        for (j=0;j<n;j++)
                        {
                                if (  ( (j>k)&&(j<=(2*k))&&(i==0) )  ||
                                      ( (i==k)&&(j<k)             )  ||
                                      ( (i==n-1-k)&&(j<k)         )  ||
                                      ( (i==n/2)&&(j<=k)          )   )
                                {
                                        temp=ma[i][j];
                                        ma[i][j]=ma[i][n-1-j];
                                        ma[i][n-1-j]=temp;
                                }
                        }

                for (i=0;i<n;i++)
                        for (j=0;j<n;j++)
                        {
                                if (  ( (j==n-1-k)&&(i<2)        )  ||
                                      ( (j==0)&&(i==k)           )  ||
                                      ( (j==n-1-k)&&(i>1)&&(i<k) )   )
                                {
                                        temp=ma[i][j];
                                        ma[i][j]=ma[n-1-i][j];
                                        ma[n-1-i][j]=temp;
                                }
                        }


        }

        else if (n%2==1)
        {
                for (count=1;count<=(n*n);count++)
                {
                        if (count==1)
                        {
                                i=0;
                                j=(n-1)/2;
                        }

                        else if (count%n!=1)
                        {
                                i--;
                                j++;
                        }

                        else
                                i++;

                        if (i<0)
                                i=n-1;
                        if (i>n-1)
                                i=0;
                        if (j<0)
                                j=n-1;
                        if (j>n-1)
                                j=0;


                        ma[i][j]=count;
                }
        }

        for (i=0;i<n;i++)
        {
                count=0;
                for (j=0;j<n;j++)
                        count+=ma[i][j];
                ma[i][n]=count;
        }

        for (j=0;j<n;j++)
        {
                count=0;
                for (i=0;i<n;i++)
                        count+=ma[i][j];
                ma[n][j]=count;
        }

        for (i=0;i<=n;i++)
        {
                for (j=0;j<=n;j++)
                        printf("%4d",ma[i][j]);
                printf("\n");
        }
}


