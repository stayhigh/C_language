#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j; // 外與內迴圈變數
	// 宣告時直接給定銷售量
	int Item[3][4] = {{12,45,10,5}, 	
					  {20,5,31,25},
					  {30,20,14,8}};
	int AreaSale[4] = {0}; // 儲存每一區的總銷售量
	int ItemSale[3] = {0}; // 儲存每一項的總銷售量
	for( i = 0 ; i < 3 ; i++ ) // 計算商品的總銷售量
		for( j = 0 ; j < 4 ; j++ ) // 以每一列為依據,加總該列內的所有內容
			ItemSale[i] = ItemSale[i] + Item[i][j];
	for( j = 0 ; j < 4 ; j++ ) // 計算商品在每一區的銷售量
		for( i = 0 ; i < 3 ; i++ ) // 以每一行為依據,加總該行內的所有內容
			AreaSale[j] = AreaSale[j] + Item[i][j];
	// 輸出各區與各商品的銷售量
	printf("       東區 南區 西區 北區  總銷量\n");
	for( i = 0 ; i < 3 ; i++ ) {
		printf("商品%2d ",i+1);
		for( j = 0 ; j < 4 ; j++ ) 	printf("%4d ",Item[i][j] );
		printf("%3d \n",ItemSale[i]); // 輸出總銷售量
	}
	printf("總銷量 ");
	for( j = 0 ; j < 4 ; j++ ) 	printf("%4d ",AreaSale[j] ); 
	printf("\n");
	system("pause"); return(0);
}