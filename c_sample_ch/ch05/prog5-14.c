#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix;
	printf("請輸入一個數字: ");
	scanf("%d",&ix);
	switch(ix) {/*根據輸入來判斷 */
		case 1: /* 剪刀 */
			printf("你出的是剪刀\n");
			break;
		case 2: /* 石頭 */
			printf("你出的是石頭\n");
			break;
		case 3: /* 布 */
			printf("你出的是布\n");
			break;
		default:
			printf("輸入錯誤\n");
	}
	system("pause");
	return 0;
}