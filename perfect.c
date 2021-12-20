#include<stdio.h>
    void main()
        {
            int i,n,sum;
            sum=0;
            i=1;
            printf("Enter N:");
            scanf("%d",&n);

            while(i<n)
            {
                if(n%i==0)
                {
                    sum=sum+i;
                    printf("factor=%d\n",i);
                }
                i++;
            }
            if(sum==n)
            {
                printf("%d is perfect",n);
            }
            else
            {
                printf("%d is not perfect",n);
            }
        }