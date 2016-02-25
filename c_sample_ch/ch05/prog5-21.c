#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iP, ix, iFactor;
	printf("块 2 计: "); scanf("%d",&iP); 
	ix = 2; iFactor = 0; /* ix 眖 2 秨﹍, iFacotr  0 */
	while( (ix*ix <= iP) && (iFactor == 0) ) /* 计计耞 */
	{
		if( !(iP%ix) ) iFactor=1; /* 祇瞷计, 砞﹚ iFactor ず甧 1  */
		ix++; /* ix 患糤 1 */
    }
	if( iFactor == 0 ) printf("%d 琌借计\n",iP);
	else printf("%d ぃ琌借计\n",iP);
    system("pause");
    return(0);
}
