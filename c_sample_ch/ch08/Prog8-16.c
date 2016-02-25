#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j; // 外與內迴圈變數
	int Item[3][4]; // 儲存每項商品四區的銷售數量
	printf("輸入商品的銷售量(1:東區,2:南區,3:西區,4:北區)\n");
	for( i = 0 ; i < 3 ; i++ ) {
		for( j = 0 ; j < 4 ; j++ ) {
			printf("第 %2d 項商品在第 %2d 區的銷售量: ",i+1,j+1);
			scanf("%d",Item[i]+j); // Item[i]+j 已經指向儲存空間的位址，無須 &
		}
	}
	for( i = 0 ; i < 3 ; i++ ) { // 輸出商品的銷售數量
		printf("第 %2d 項商品的銷售量分別是:",i+1);
		for( j = 0 ; j < 4 ; j++ ) 	printf("%2d ",*(Item[i]+j));
		printf("\n");
	}
	system("pause"); return(0);
}