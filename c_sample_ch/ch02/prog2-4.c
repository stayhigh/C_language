#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int Coffee = 50;	// 宣告時指定
	int RedTea;
	printf("咖啡 1 杯 %d 元\n",Coffee);
	RedTea = 25;	// 在需要時指定
	printf("紅茶 1 杯 %d 元\n",RedTea);
	system("pause");
	return(0);
}