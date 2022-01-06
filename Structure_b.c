#include<stdio.h>
	struct person{
		char name[100];
		char date[100];
		float salary;
	}per[5];
	void main()
	{
		for(int i=0;i<5;i++)
		{
			printf("enter detail of book:%d\n",i+1);
			printf("Name=");
			scanf("%s",&per[i].name);
			printf("Date=");
			scanf("%s",&per[i].date);
		
			printf("Salary=");
			scanf("%f",&per[i].salary);
		}
		printf("\n");
		for(int i=0;i<5;i++)
		{
			printf("Person %d\n",i);
			printf("Name=%s\n",per[i].name);
			printf("Date=%s\n",per[i].date);
		
			printf("Salary=%f\n",per[i].salary);
		}
	}