#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iKilled = 0; /* 殺死怪物的個數 */
	char ch; /* 儲存使用者的輸入 */
	while( iKilled < 5 )  /*打死第 5 隻就行了 */
	{
		printf("有解決一隻巫師嗎:"); 
		scanf("%c",&ch);
		if( ch == 'Y' || ch == 'y' ) iKilled++;
		fflush(stdin); /* 清除輸入緩衝區的內容 */
	}
	printf("任務完成,已經殺死 %d 隻的巫師\n",iKilled);
	system("pause"); return 0;
}