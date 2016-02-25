#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, iEven, iOdd;  /* 璽砫璸计籔羆跑计 */
	iEven = iOdd = 0; // 磅︽iOdd = 0 , 礛琌 iEven = iOdd, ┮ iEven=0
	for( i = 1 ; i <= 100 ; i++ ) { /* i 眖 1 患糤 100,  i  101 挡*/
		if( i%2 == 0 ) iEven += i; /* 案计 */
		else iOdd += i; /* 计 */
	}
	printf("1+3+...+99  = %d\n",iOdd);
	printf("2+4+...+100 = %d\n",iEven);
	system("pause"); 	
	return(0);
}