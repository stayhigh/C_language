#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	const int RedTeaPrice = 20, CoffeePrice = 35; /* 宣告儲存紅茶與咖啡的變數 */
	int RedTea, Coffee, total; // 儲存輸入的購買數量與總價
	printf("輸入紅茶購買的數量:");
	scanf("%d",&RedTea); /* 接受使用者的輸入 */
	printf("輸入咖啡購買的數量:");
	scanf("%d",&Coffee); /* 接受使用者的輸入 */
	total = RedTea * RedTeaPrice + Coffee * CoffeePrice;
	printf("購買總價為:%d \n", total);
	system("pause"); return(0);
}