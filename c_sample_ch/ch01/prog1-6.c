#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	int x; /* 儲存紅茶的購買數量 */
	int y; /* 儲存咖啡的購買數量 */
	int z; /* 儲存應付的總價 */
	printf("請問你要購買幾瓶紅茶:");
	scanf("%d",&x); 
	printf("請問你要購買幾瓶咖啡:");
	scanf("%d",&y); 
	z = x * 25 + y * 35;
	printf("購買總價為:%d \n",z);
	system("pause");
	return(0);
}