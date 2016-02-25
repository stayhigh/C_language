#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int x; /* 宣告變數 x，用來儲存玩家輸入的攻擊力 */
	printf("輸入攻擊力：");
	scanf("%d",&x); /* 接受使用者的輸入 */
	printf("對怪物的傷害值為：%d \n",x*2-15);
	system("pause");
	return(0);
}
