#include <stdio.h>
#include <stdlib.h>
int main()
{
	char String[10] = "Dragon"; //一維字元陣列
	char *pString = "Dragon";	//字元指標變數
	char cWord[4][10] = {"Apple","Orange","Banana","Melon"}; //二維陣列
	char *pcWord[4] = {"Apple","Orange","Banana","Melon"}; //一維字元指標陣列
	int i;
	printf("sizeof:%2d strlen:%2d %s\n",sizeof(cWord[0]),
			 strlen(cWord[0]),cWord[0]);
	printf("起始位址─ cWord: %p  pcWord: %p\n",cWord, pcWord[0]);
	String[0] = 'X'; cWord[0][0] = 'X'; // 更改字串內的第一個字元
//	pString[0] = 'X'; pcWord[0][0] = 'X';
	system("pause"); return(0);
}