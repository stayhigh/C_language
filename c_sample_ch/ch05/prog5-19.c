#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iP, ix, iFactor;
	printf("块 2 计: "); 
	scanf("%d",&iP); /* 安砞块计常穦 2 */
	ix = 2; iFactor = 0; /* ix 眖 2 秨﹍, iFacotr  0 */
	while( ix <= iP - 1)
	{
		if( !(iP%ix) ) { /* ix 计 */
			if( iFactor == 0 ) printf("计Τ: %3d ",ix); /* 材Ω块计 */
			else printf(" %3d ",ix); /* 块ㄤ计 */
			iFactor++; /* 计计 1 */
		}
		ix++; /* ix 患糤 1 */
    }
	if( iFactor == 0 ) printf("%d 琌借计\n",iP);
    system("pause");
    return(0);
}
