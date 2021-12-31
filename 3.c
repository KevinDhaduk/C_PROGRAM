#include<stdio.h>
	void main()
		{
			int n,i,j,num;


			printf("Enter N:");
			scanf("%d",&n);

			num=1;
			for(i=1;i<=n;i++)
			{
				for(j=1;j<=i;j++)
				{
					printf("%d",num);
					num++;
				}
				printf("\n");
			}
		}