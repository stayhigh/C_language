#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *piNum; 
	int sum = 0,i,n; // sum 是總和, i 是迴圈變數, n 為數值個數
	printf("共需要計算多少筆數值的總和: "); scanf("%d",&n);
	piNum = (int*)malloc(sizeof(int)*n); //取得 n 個 int 型別的儲存空間
	for( i = 0 ; i < n ; i++) {
		printf("請輸入第%2d 個數值:",i+1);
		scanf("%d",piNum+i); // 輸入第 i 筆資料
		sum += *(piNum+i);   // 計算總和
	}
	printf("總和等於%d\n",sum);
	free(piNum);  // 釋放配置的記憶體
	system("pause"); return(0);
}
