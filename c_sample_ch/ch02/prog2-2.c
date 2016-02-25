#include <stdio.h>
#include <stdlib.h>
#include <math.h>	// 載入數學函式標頭檔
int main(void) 
{
	int x;   /*儲存玩家輸入的攻擊力 */
	float t; /*對怪物的傷害值 */
	printf("輸入攻擊力：");
	scanf("%d",&x); /* 接受使用者的輸入 */
	t = pow(x,1.5)*2.0 - sqrt(10.0) * 25;
	printf("對怪物的傷害值為:%f \n", t);
	system("pause");
	return(0);
}