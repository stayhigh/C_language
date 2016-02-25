#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iNum;	/* 接收使用者每次的輸入 */
	int iSum = 0;	/* 設定總和為 0 */
	int iStatus;	/* 輸入的內容是否為數 */
	printf("輸入要相加的數(非數字表示結束): ");
	iStatus = scanf("%d",&iNum); /* scanf 傳回正確輸入的個數 */
	while(iStatus == 1) /* 輸入為正確的數值 */
	{
		iSum = iSum + iNum; /* 加總 */
		printf("輸入要相加的數: ");
		iStatus = scanf("%d",&iNum); 
	}
	printf("累加的結果為%d \n",iSum);
	system("pause"); 
	return(0);
}
