#include<stdio.h>
    void main()
        {
            int i,j,n,flag;

            printf("Enter N1:");
            scanf("%d",&n);
            
            
            for(i=2;i<n;i++)
            {
                flag=0;
                for(j=2;j<i;j++)
                {
                    if(i%j==0)
                    {
                         flag++;
                         break;
                    }
                    
                }
                 if(flag==0)
                    {
                    printf("%d\n",i);
                    }
              
            }
        }