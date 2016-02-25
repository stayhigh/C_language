#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix = 1;
	int iEven, iOdd; 
	iEven = iOdd = 0; /* 狦Τ跑计璶砞﹚Θず甧, 糶Θ硂妓 */
	while( ix <= 100 ) 
	{	
		switch(ix%2) {/* 0 案计, 1 计 */
			case 0:
				iEven = iEven + ix;	/* 案计仓 */
				break;
			case 1:
				iOdd = iOdd + ix;	/* 计仓 */
				break;
		}
		ix++; /* ix = ix + 1 */
	}
	printf("案计: 2+4...+100=%4d\n",iEven);
	printf("计: 1+3...+ 99=%4d\n",iOdd);
	system("pause");
	return 0;
}