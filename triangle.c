#include<stdio.h>
    void main()
        {
            int s1,s2,s3;

            printf("Enter s1:");
            scanf("%d",&s1);
            printf("Enter s2:");
            scanf("%d",&s2);
            printf("Enter s3:");
            scanf("%d",&s3);

            if(s1==s2 && s2==s3 && s3==s1)
            {
                printf("Triangel Is Equletral");
            }
            else if(s1==s2 || s2==s3 || s3==s1)
            {
                printf("Triangle Is Isoscelen");

            }
            else if((s1*s1)+(s2*s2)==(s3*s3)
                    || (s2*s2)-(s3*s3)==(s1*s1)
                    || (s3*s3)-(s1*s1)==(s2*s2))
            {
                printf("Triangle Is Right angle");

            }
            else{
                printf("Triangle Is Scelen");
            }


        }