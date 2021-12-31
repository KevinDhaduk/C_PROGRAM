#include<stdio.h>
	void main()
		{
			int n,i,j,k;

			printf("Enter N:");
			scanf("%d",&n);

			
			for(i=1;i<=n;i++)
			{
				k=1;
				for(j=1;j<=n-i;j++)
				{
					printf(" ");
				}
				while(k<2*i)
				{
					if(k%2!=0)
					{
						printf("%d",i);
					}
					else
					{
						printf(" ");
					}
					k++;
				}
				printf("\n");
			}
		}