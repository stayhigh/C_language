#include <stdio.h>
#include <stdlib.h>
float StdWeight(float,int); //原型定義,第一個引數為身高
int main(void)
{
	int sex,height;	// sex 是性別選項變數, height 是身高
	float weight;	// 計算結果的體重值

	printf("性別 (0)女(1)男 :");
	scanf("%d",&sex); //這裡沒有檢查輸入值，預設輸入不是0就是1 
	printf("請輸入身高(公分): ");
	scanf("%d",&height);
	weight = StdWeight(height,sex);
	printf("您的理想體重是 %4.1f 公斤\n", weight);
	system("pause"); return(0);
}
float StdWeight(float h,int s) // 理想體重的計算函式
{
	float ret;
	if (s == 0) ret = (h - 70) * 0.6;
	else ret = (h - 80) * 0.7;
	return(ret);
}
