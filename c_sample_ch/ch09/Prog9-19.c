#include <stdio.h>
#include <stdlib.h>
#include <string.h>
union Paid	{	// 宣告共同空間 paid
	char cCreditCard[17]; // 儲存信用卡號碼
	int  iCash;	     // 儲存現金
} money;
int main(void)
{
	int iAmt=1500, iOpt; // 預設應付金額為 1500
	printf("應付金額為: %d\n",iAmt);
	do {
		printf("選擇付款方式-1(信用卡) 2(現金) : ");
		scanf("%d",&iOpt);
		if ( iOpt == 1 ) { /* 選擇付款方式*/
			printf("請輸入您的卡號: "); scanf("%s",money.cCreditCard);
			if(strlen(money.cCreditCard) != 16) { 
				printf("卡號錯誤!請重新操作!\n"); 
				iOpt = 0; // 讓 while 迴圈可以繼續執行
			}
			else printf("扣款成功!!\n");
		}
		else if ( iOpt == 2 ) {
			printf("請輸入現金金額: "); scanf("%d",&money.iCash);
			if ( money.iCash < iAmt ) { 
				printf("金額不足!請重新操作!\n");
				iOpt = 0; // 讓 while 迴圈可以繼續執行
			}
			else printf("交易成功!找您 %3d 元\n",money.iCash-iAmt);
		}
		else { printf("請輸入正確的付款方式\n"); }
	} while( iOpt != 1 && iOpt != 2 ) ;
	system("pause"); return(0);
}