#include <stdio.h>
    void main()
    {
        int n,k=1,i,j;
        printf("Enter the number of rows: ");
        scanf("%d", &n);
        for (i=0;i<n;i++)
        {
            for (k=1;k<=n-i;k++)
            {
                printf("  ");
            }
            for (j=0;j<=i;j++)
            {
                if (j==0 || i==0)
                {
                    k=1;
                }
                else
                {
                    k=k*(i-j+1)/j;
                }
                printf("%d",k);   
            }
            printf("\n");
        }
    }
