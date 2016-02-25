#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int iDice[6] = {0};
	int i, t; /* t 為骰子的出現點數 */
	srand((unsigned)time(NULL)); // 設定亂數產生器的起始值
	for(i=1; i<=100000 ; i++) {
		t = rand()%6+1;
		if( t == 1 ) iDice[0]++; /* 出現1點 */
		else if( t == 2 ) iDice[1]++; /* 出現2點 */
		else if( t == 3 ) iDice[2]++; /* 出現3點 */
		else if( t == 4 ) iDice[3]++; /* 出現4點 */
		else if( t == 5 ) iDice[4]++; /* 出現5點 */
		else iDice[5]++; /* 出現6點 */
	}
	for( i=1; i <= 6 ; i++ ) { /*輸出每一個面的出現次數與機率 */
		printf("%d 點出現 %5d 次,",i,iDice[i-1]);
		printf("機率為 %.3f\n",(float)iDice[i-1]/100000);
	}
	system("pause"); 
	return(0);
}