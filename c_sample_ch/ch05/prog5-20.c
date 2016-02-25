#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iP, ix, iFactor;
	printf("块 2 计: ");
	scanf("%d",&iP); 
	ix = 2; iFactor = 0; /* ix 眖 2 秨﹍, iFacotr  0 */
	while( ix*ix < iP )
	{
		if( !(iP%ix) ) { /* ix 计 */
			if( iFactor == 0 ) printf("计Τ: %3d %3d ",ix,iP/ix); /*Θ癸计*/
			else printf(" %3d %3d ",ix,iP/ix); /* Θ癸计 */
			iFactor += 2; /* Ω―眔ㄢ计, ┮计 2 */
		}
		ix++; /* ix 患糤 1 */
    }
	if( ix*ix == iP ) { /*秆∕ iP 单 ix*ix 拜肈 */
		if( iFactor == 0 ) printf("计Τ: %3d ",ix);	
		else printf(" %3d ",ix); /* 块计 */
		iFactor ++; /* iP=ix*ix 薄, 计Τ, 碞琌 ix */
	}
	if( iFactor == 0 ) printf("%d 琌借计\n",iP);
	else printf("\nΤ %d 计\n",iFactor);
    system("pause");
    return(0);
}
