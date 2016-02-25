#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iRed, iGreen, icount, itotal;
	printf("請輸入兩個商品購買的數量\n");
	printf("紅色 = "); scanf("%d",&iRed);
	printf("綠色 = "); scanf("%d",&iGreen);
	icount = iRed+iGreen;
	itotal = iRed*150+iGreen*200;
	if( icount > 40 ) { /* 購買總數超過 40 件 */
		if( iGreen >= 30 ) {  /* 綠色商品超過 30 件 */
			itotal = itotal * 0.8;
			printf("您享有 8 折的優惠\n");
		}
		else { 
			itotal = itotal * 0.85;
			printf("您享有 85 折的優惠\n");
		}
	}
	else if( icount > 30 ) {  /* 購買總數超過 30 件 */
		if( iGreen >= 20 ) { /* 綠色商品超過 20 件 */
			itotal = itotal * 0.9; printf("您享有 9 折的優惠\n");
		}
		else if( iRed >= 28 ) { /* 紅色商品超過 28 件 */
			itotal = itotal * 0.95; printf("您享有 95 折的優惠\n");
		}
	}
	printf("購買的總金額: %d\n",itotal);	
	system("pause");
	return(0);
}