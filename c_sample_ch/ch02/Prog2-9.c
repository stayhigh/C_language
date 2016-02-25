#include <stdio.h>
#include <stdlib.h>
#define REDTEA_PRICE 20
#define COFFEE_PRICE 35
int main(void) 
{
	// 儲存輸入的購買數量、總價與總杯數
	int RedTea, Coffee, total, TotalCups; 
	printf("輸入紅茶購買的數量:"); scanf("%d",&RedTea); 
	printf("輸入咖啡購買的數量:"); scanf("%d",&Coffee); 
	total = RedTea * REDTEA_PRICE + Coffee * COFFEE_PRICE;
	printf("購買總價為:%d \n", total);
	RedTea = RedTea * 2 + 1;	// 計算紅茶製作的杯數
	Coffee = Coffee + Coffee / 2 + 2;	// 計算咖啡製作的杯數
	TotalCups = RedTea + Coffee;	// 計算總杯數
	printf("紅茶: %d 杯, 咖啡: %d 杯,總數: %d 杯\n",RedTea,Coffee,TotalCups);
	system("pause");
	return(0);
}