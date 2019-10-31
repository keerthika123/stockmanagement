#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct cust
{
	int id;
	char name[99];
	int prod_id;
}
struct prod
{
	int id[10];
	char prod_name[99];
}
void printname(int n)
{
	switch(n)
	{
		case 11:printf("WATCH\n");
			printf("prize:200\n");
			printf("model_no:mod12\n");
			break;
		case 12:printf("PENDRIVE");
			printf("prize:400\n");
			printf("model_no:mod13\n");
			break;
		case 13:printf("WATERHEATER\n");
			printf("prize:900\n");
			printf("model_no:mod19\n");
			break;
		case 14:printf("MOBILE\n");
			printf("prize:5000\n");
			printf("model_no:mod10\n");
			break;
		case 15:printf("HEADSET\n");
			printf("prize:250\n");
			printf("model_no:mod16\n");
			break;
		case 16:printf("SPEAKER\n");
			printf("prize:300\n");
			printf("model_no:mod124\n");
			break;
		case 17:printf("BLUETOOTH\n");
			printf("prize:200\n");
			printf("model_no:mod12\n");
			break;
		case 18:printf("MEGASPEAKER\n");
			printf("prize:2000\n");
			printf("model_no:mod121\n");
			break;
		case 19:printf("KEYBOARD\n");
			printf("prize:500\n");
			printf("model_no:mod99\n");
			break;
		case 20:printf("MOUSE\n");
			printf("prize:200\n");
			printf("model_no:mod12\n");
			break;
			
int main()
{
	int prod[10]={11,12,13,14,15,16,17,18,19,20};
	while(1)
	{
	printf("enter the customer id");
	scanf("%d",&cust.id);
	printf("enter the name of the customer");
	scanf("%s",cust.name);
	printf("enter the product id to buy");
	scanf("%d",&cust.prod_id);
	for(i=0;i<10;i++)
	{
		if(cust.id==prod[i])
		{
			printname(prod[i]);
		}
	}
}
	
	
	
