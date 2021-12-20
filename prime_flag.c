#include<stdio.h>
    void main()
        {
            int i,n,flag;
            i=2;
            flag=0;

            printf("Enter N:");
            scanf("%d",&n);

            while(i<n)
            {
                if(n%i==0)
                {
                    flag=1;
                    
                }
                i++;
                
            }
            if(flag==0)
            {
             printf("%d is prime",n);
            }
            else
            {
            printf("%d is not prime",n);
            }
            
        }