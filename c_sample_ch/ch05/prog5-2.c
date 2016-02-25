#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix = 1;
	int iEven, iOdd; 
	iEven = iOdd = 0; /* 狦Τ跑计璶砞﹚Θず甧, 糶Θ硂妓 */
	while( ix <= 100 ) 
	{	/* ノ案计埃 2 ﹚緇 0, 计埃 2 ﹚緇 1 ┦借ㄓ耞,案计 */
		if( ix%2 == 0 )  iEven += ix; // 碞琌:iEven = iEven + ix;
		else iOdd  += ix; // 碞琌:iOdd = iOdd + ix;
		ix++; /* ix = ix + 1 */
	}
	printf("案计: 2+4...+100=%4d\n",iEven);
	printf("计: 1+3...+ 99=%4d\n",iOdd);
	system("pause");
	return 0;
}