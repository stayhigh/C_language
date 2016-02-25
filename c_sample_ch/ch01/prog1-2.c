#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int attack;   /* 宣告變數儲存玩家輸入的攻擊力 */
	int defence;  /* 宣告變數儲存玩家輸入的防禦力 */
	printf("輸入攻擊力:");
	scanf("%d",&attack); /* 接受使用者的輸入*/
	printf("輸入怪物的防禦力:");
	scanf("%d",&defence); /* 接受使用者的輸入*/
	printf("對怪物的傷害值為:%d \n",attack*3-defence*2);
	system("pause");
	return(0);
}