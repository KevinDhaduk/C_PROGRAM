#include<stdio.h>
	void main()
		{
			int n;

			printf("Enter Array Size:");
			scanf("%d",&n);

			int num[n],i,min=0,max=0,sum=0,avg=0;

			for(i=0;i<n;i++)
			{
				printf("num[%d]:",i);
				scanf("%d",&num[i]);
				
			}
			min=max=num[0];
			for(i=0;i<n;i++)
			{
				if(max<num[i])
				{
					max=num[i];
				}
				if(min>num[i])
				{
					min=num[i];
				}
				sum=sum+num[i];
				
			}
			avg=sum/n;

			printf("%d\n",max);
			printf("%d\n",min);
			printf("%d\n",sum);
			printf("%d\n",avg);
		}