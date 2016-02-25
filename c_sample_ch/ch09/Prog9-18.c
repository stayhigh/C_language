#include <stdio.h>
#include <stdlib.h>
union Paid { // 共同空間的宣告
	char  cCreditCard[21];
	char  cBankAccount[16];
	int   iCash;
}; 
int main(void)
{
	union Paid money; // 以 Paid 來宣告變數
	printf("sizeof(union Paid) = %2d\n",sizeof(union Paid)); // 以4個位元組為單位
	printf("請輸入銀行帳號:   "); scanf("%s",money.cBankAccount);
	printf("銀行帳號:   %s\n",money.cBankAccount);
	printf("請輸入信用卡號碼: "); scanf("%s",money.cCreditCard);
	printf("信用卡號碼: %s\n",money.cCreditCard);
	printf("請輸入現金金額: "); scanf("%d",&money.iCash);
	printf("現金金額:   %4d\n",money.iCash);
	printf("信用卡號碼: %s\n",money.cCreditCard); // 將輸出奇怪的訊息
	system("pause"); return(0);
}