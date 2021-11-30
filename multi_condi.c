#include<stdio.h>
    void main()
        {
            int a,b,c;

            printf("Enter A:");
            scanf("%d",&a);
            printf("Enter B:");
            scanf("%d",&b);
            printf("Enter C:");
            scanf("%d",&c);

            (a>b?printf("%d*%d=%d",a,c,a*c):printf("%d*%d=%d",b,c,b*c));

        }