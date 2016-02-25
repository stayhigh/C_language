#include <stdio.h>
#include <stdlib.h>
#define REDTEA_PRICE 20 // 宣告符號常數來儲存紅茶售價
#define COFFEE_PRICE REDTEA_PRICE * 2
int main(void) 
{
	int RedTea, Coffee, total; // 儲存輸入的購買數量與總價
	printf("輸入紅茶購買的數量:");
	scanf("%d",&RedTea); /* 接受使用者的輸入 */
	printf("輸入咖啡購買的數量:");
	scanf("%d",&Coffee); /* 接受使用者的輸入 */
	total = RedTea * REDTEA_PRICE + Coffee * COFFEE_PRICE;
	printf("購買總價為:%d \n", total);
	system("pause");
	return(0);
}