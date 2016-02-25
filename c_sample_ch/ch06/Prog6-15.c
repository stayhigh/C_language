#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i, ix, iz;
	srand((unsigned)time(NULL)); 
	ix = rand()%10; /* 隨機產生介於0到9的數 */
	for( i = 1, iz = -1; i <=4 && ix != iz ; i++ ) {
		printf("第 %d 次猜測(輸入0 ~ 9):",i);
		scanf("%d",&iz);
	}
	if( ix == iz ) printf("恭喜你猜對了\n");
	else printf("正確的數字為 %d\n",ix);
	system("pause");
	return(0);
}