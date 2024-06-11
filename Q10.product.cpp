#include<stdio.h>
#include<string.h>

typedef struct product
{
	int id;
	char name[20];
	int quantity;
	double price;
	
} product;

int main()
{
	int i;
	
	struct product arr[3];
	
	for(i=0; i<3; i++)
	{
		printf("enter the id");
		scanf("%d", &arr[i].id);
		
		printf("enter the name");
		scanf("%s", arr[i].name);
		
		printf("enter the quantity");
		scanf("%d", &arr[i].quantity);
		
		printf("enter the price");
		scanf("%ld", &arr[i].price);
		
			 
	}
	
	for(i=0;i<3;i++)
	{
		printf("product details : \n product id is :%d\n  name:%s\n  quantity:%d\n price:%ld\n " , arr[i].id, arr[i].name, arr[i].quantity, arr[i].price );
	}
	return 0;
}















