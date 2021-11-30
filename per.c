#include<stdio.h>
    void main()
        {
            int s1,s2,s3,s4,s5,total,per;

            printf("Enter S1:");
            scanf("%d",&s1);
            printf("Enter S2:");
            scanf("%d",&s2);
            printf("Enter S3:");
            scanf("%d",&s3);
            printf("Enter S4:");
            scanf("%d",&s4);
            printf("Enter S5:");
            scanf("%d",&s5);

            total=s1+s2+s3+s4+s5;

            per=total/5;

            if(per>=75)
            {
                printf("Distiction........");
            }
            else if(per>=65 && per<75)
            {
                printf("1st Class.......");
            }
            else if(per>=45 && per<65)
            {
                printf("2nd Class.......");
            }
            else if(per>=35 && per<45)
            {
                printf("Pass.......");
            }
            else{
                printf("Fail.....");
            }
            
        }