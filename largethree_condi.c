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

            ((a>b && a>c)?printf("%d Is Largest",a):((b>c)?printf("%d Is LArgest",b):printf("%d IS Largest",c)));
        }