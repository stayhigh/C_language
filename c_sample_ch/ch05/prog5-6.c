#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iNum, iSave, iPower = 0;
	int iFlag = 1; /* = 1 表示輸入的數是 2 的次方*/
	printf("請輸入一個整數: ");
	scanf("%d",&iNum);
	iSave = iNum; /* 保留使用者輸入, 以便後面輸出 */
	while (iFlag && iNum != 1 ) { /* 當這個數依然是 2 的次方, 而且 iNum 還沒有除到剩下 1 */
		if( iNum % 2 == 0 ) {
			iPower++; /* 每次被 2 整除就加 1 */
			iNum = iNum / 2; /* 每次將本身除以 2 */
		}
		else iFlag = 0;  /* iFlag = 0 代表這個數不是 2 的次方，因為沒有辦法被 2 整除 */
	}
	if( iFlag ) printf("你輸入的數值 %d 是 2 的 %d 次方\n",iSave,iPower);
	else printf("你輸入的數值 %d 不是是 2 的次方\n",iSave);
	system("pause");
	return 0;
}