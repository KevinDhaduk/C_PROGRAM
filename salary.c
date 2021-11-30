#include<stdio.h>
    void main()
        {
            float bs,hra,da,gs;

            printf("Enter Basic Salary:");
            scanf("%f",&bs);

            if(bs>=10000 && bs<20000)
            {
                hra=bs*.80;
                da=bs*.25;
                gs=bs+hra+da;
            }
            else if(bs>=20000 && bs<30000)
            {
                hra=bs*.85;
                da=bs*.30;
                gs=bs+hra+da;
            }
            else
            {
                hra=bs*.90;
                da=bs*.35;
                gs=bs+hra+da;

            }

            printf("Gross Salary=%f",gs);
        }