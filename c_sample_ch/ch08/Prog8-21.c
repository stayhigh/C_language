#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define  NUM 5    // 定義輸入的文字量
int main()
{
	char cWord[NUM][10];// 宣告 5x10 的二維字元陣列
	char *pcW[NUM];	// 指向 cWord 每一個 row
	char *pc;		// 用於交換 pcW 內容的暫存變數
	int  i, j, min;
	printf("請依序輸入輸入%d個單字\n",NUM);
	for (i = 0 ; i < NUM; i++) {
		printf("第 %d 個:",i+1);
		gets(cWord[i]);  // 取得輸入的文字
		pcW[i] = cWord[i]; // 設定指向第 i row
	}
	for( i = 0 ; i < NUM-1 ; i++ ) {
		min = i; /*假設目前最小 cWord[min] */
		for( j = i+1 ; j < NUM ; j++ ) 
			if( strcmp(pcW[min],pcW[j]) > 0 ) min = j; // 記下最小數的索引值
		pc = pcW[i]; pcW[i] = pcW[min]; pcW[min] = pc; // 交換所指向的位址
	}
	printf("排序後\n");
	for (i=0; i<NUM; i++) /* 輸出排序後結果的迴圈*/
		printf("第 %d 個: %s\n",i+1, pcW[i]); // 利用 pcW[i] 的指向來輸出
	system("pause"); return(0);
}