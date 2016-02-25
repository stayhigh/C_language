#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct GoodsInfo {
	char cName[20]; 
	int  iPrice;
	int  iSerialNo;
	char cExpirDate[6];
};
int main(void)
{
	struct GoodsInfo cake1 = {"提拉米蘇",35,1216,"01/21"}, // 宣告時設定初始值
		   coffee = {"拿鐵咖啡",50,1128,"03/12"}, cake2;
	cake2 = cake1;
	strcpy(cake2.cName,"黑森林");  // 將字串"黑森林",複製到 cake2.cName 中
	printf("輸入黑森林蛋糕的商品編號: "); scanf("%d",&cake2.iSerialNo);
	fflush(stdin); // 清除輸入緩衝區的內容
	printf("輸入黑森林蛋糕的保存期限: "); gets(&cake2.cExpirDate);
	printf("%s蛋糕的商品編號:%4d 售價%3d元 保存期限:%s\n"
			,cake2.cName,cake2.iSerialNo,cake2.iPrice,cake2.cExpirDate);
	system("pause"); return(0);
}