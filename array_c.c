#include<stdio.h>
    void main()
        {
            int n;

            printf("Enter Array Size:");
            scanf("%d",&n);

            int a[n],i;

            for(i=0;i<n;i++)
            {
                printf("a[%d]:",i);
                scanf("%d",&a[i]);
            }
            for(i=n-1;i>=0;i--)
            {
                printf("%d\n",a[i]);
            }
        }