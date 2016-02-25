#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iScore[4];
	int i, x, itotal; /* x 用來接收輸入的成績 */
	for(i=0; i<=3 ; i++) {
		printf("請輸入成績: ");
		scanf("%d",&x);
		iScore[i] = x;/*成績儲存到陣列中 */
	}
	for(itotal = 0, i=0; i<=3 ; i++)  {
		printf("第 %d 筆成績: %2d\n",i+1,iScore[i]); /* 輸出儲存的成績 */
		itotal += iScore[i]; /* 計算加總 */
	}
	printf("總成績: %d, 平均成績: %.2f\n",itotal, itotal/4.0f);
	system("pause"); 
	return(0);
}