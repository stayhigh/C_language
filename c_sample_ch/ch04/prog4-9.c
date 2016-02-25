#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iTea, iCoffee, iCount, iTotal; 
	iTea = iCoffee = iCount = iTotal = 0; // 設定初始值都是0
	printf("輸入購買紅茶的瓶數:"); scanf("%d",&iTea);
	printf("輸入購買咖啡的瓶數:"); scanf("%d",&iCoffee);
	iTotal = iTea * 25 + iCoffee * 35;
	iCount = iTea + iCoffee;
	if( iCount > 20 || iTotal >= 600 || iTea >= 16 ) iTotal = iTotal * 0.85;
	printf("應付總價:%d\n",iTotal);
	system("pause");
	return(0);
}
