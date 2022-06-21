#include<stdio.h>
struct Menu
{
	char item[5];
	int price[5];
};

int main()
{
	struct  Menu South_indian;
	int i, num=6;
	South_indian.item['Plain Dosa', 'Masala Dosa', 'Idli(2pcs)', 'Vada(2pcs)', 'Uttapam'];
	South_indian.price[60, 90, 40, 50, 40];
	printf("The South Indian menu is as follows: \n");
	for(i=0;i<5;i++)
	{
		printf("%d. %s  :  %d\n",num,South_indian.item[i],South_indian.price[i]);
		num++;
	}
}