#include<stdio.h>
	struct book
	{
		char title[100];
		char author[100];
		char publication[100];
		float price;
	}bk[5];

void main()
{
	int i;
	

	for(i=0;i<5;i++)
	{
		printf("enter detail of book:%d\n",i+1);
		printf("Title=");
		scanf("%s",&bk[i].title);
		printf("Author=");
		scanf("%s",&bk[i].author);
		printf("Publication=");
		scanf("%s",&bk[i].publication);
		printf("Price=");
		scanf("%f",&bk[i].price);
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("book %d\n",i);
		printf("Title=%s\n",bk[i].title);
		printf("Author=%s\n",bk[i].author);
		printf("Publication=%s\n",bk[i].publication);
		printf("Price=%f\n",bk[i].price);
	}
}
