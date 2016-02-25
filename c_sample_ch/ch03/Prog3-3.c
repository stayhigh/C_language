#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int iX = 65432, iY = 100, iZ = -245;
	printf("%10d 的 8 進位:%#10o, 16進位:%#10x\n",iX,iX,iX);
	printf("%10.6d 的 8 進位:%#10.6o, 16進位:%#10.6x\n",iX,iX,iX);
	printf("1234567890\n");//此行僅顯示位置而已
	printf("%-10d\n",iY); // 向左對齊,數字前不會有空白或是補零
	printf("%-10d\n",iZ); // 向左對齊,數字前不會有空白或是補零
	printf("%10d\n",iY);  // 向右對齊,前面補空白
	printf("%10d\n",iZ);  // 向右對齊,前面補空白
	printf("%010d\n",iY);  // 向右對齊,前面補0
	printf("%010d\n",iZ);  // 向右對齊,前面補0
	printf("%+10d\n",iY);  // 輸出正負號,向右對齊,前面補空白
	printf("%+10d\n",iZ);  // 輸出正負號,向右對齊,前面補空白
	printf("% 010d\n",iY);  // 正號以空白取代,向右對齊,前面補0
	printf("% 010d\n",iZ);  // 正號以空白取代,向右對齊,前面補0
	printf("% 10.4d\n",iY); // 一定要輸出 4 個字元
	printf("% 10.4d\n",iZ); // 一定要輸出 4 個字元
	system("pause");
	return(0);
}
