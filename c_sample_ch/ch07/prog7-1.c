#include <stdio.h>
#include <stdlib.h>
void ScoreSorting() 
{ // 只有函式架構,沒有函式內容
	printf("ScoreSorting 被呼叫\n");
}
void ScoreInput() 
{ // 只有函式架構,沒有函式內容
	printf("ScoreInput 被呼叫\n");
}
void ScoreOutput() 
{ // 只有函式架構,沒有函式內容
	printf("ScoreOutput 被呼叫\n");
}
int main(void)
{
	int iChoice;
	do {
		printf("選擇 1:輸入成績 2:輸出成績 3:結束執行\n");
		scanf("%d",&iChoice);
		if( iChoice == 1 ) ScoreInput();// 呼叫 ScoreInput函式
		else if( iChoice == 2 ) ScoreOutput(); // 呼叫 ScoreOutput 函式
		else if( iChoice == 3 ) printf("程式結束\n");;
	} while(iChoice != 3);
	system("pause"); return (0);
}
