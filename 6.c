#include<stdio.h>
	void main()
		{
			int n,i,j,k,num;
			char ch='A';
			num=1;

			printf("Enter N:");
			scanf("%d",&n);

			num=1;
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
						if(i%2==0)
						{
							printf("%c",ch++);
						}
						else
						{
							printf("%d",num++);
						}

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
