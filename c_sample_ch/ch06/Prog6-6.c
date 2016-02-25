#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, iEven, iOdd;  /* 璽砫璸计籔羆跑计 */
	iEven = iOdd = 0;
	for( i = 1 ; i <= 99 ; i=i+2 ) { /* i ず甧 1,3,5,7...99,101, –Ω糤 2*/
		iOdd += i; /* 计 */ 
		iEven += i+1; /* 案计 */
	}
	printf("1+3+...+99  = %d\n",iOdd);
	printf("2+4+...+100 = %d\n",iEven);
	system("pause"); 	
	return(0);
}