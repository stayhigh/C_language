#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char cA ='a';	/* 宣告字元變數cA, 並設值為 'a' */
	char cB = 66;	/* 宣告字元變數cB, 並設值為數值 66 */  
	char cC = '中';	/* 指定中文字給字元變數 */
	printf("cA = %c其ASCII值為 %d \n",cA,cA);	 
	printf("cB = %c其ASCII值為 %d \n",cB,cB);	
	cA = cA + 1;		// ca 內容加 1
	printf("cA = %c其ASCII值為 %d \n",cA,cA);	 
	cB = 'Z' - 1; 	// cb 為字元 Z 減 1
	printf("cB = %c其ASCII值為 %d \n",cB,cB);	
	printf("cC = %c其ASCII值為 %d \n",cC,cC);	
	system("pause");
	return(0);
}