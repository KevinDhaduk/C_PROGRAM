#include<stdio.h>
    void main()
        {
            int n,i,j,k;

            printf("Enter N:");
            scanf("%d",&n);

            k=n;
            for(i=1;i<=n;i++)
            {
               
                for(j=1;j<=k;j++)
                {
                    printf("*");
                }
                k--;
                printf("\n");
            }
        }