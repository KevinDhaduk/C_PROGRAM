#include<stdio.h>
	void main()
		{
			int n,i,j,num;

			printf("Enter N:");
			scanf("%d",&n);

			for(i=1;i<=n;i++)
			{
				num=i;
				for(j=1;j<=i;j++)
				{
					if(num%2==0)
						printf("0");
					else
						printf("1");

					num++;
				}
				printf("\n");
			}
		}