#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iP, ix, iFactor;
	printf("��J�@�Ӥj�� 2 ����: "); scanf("%d",&iP); 
	ix = 2; iFactor = 0; /* ix �q 2 �}�l, iFacotr �� 0 */
	while( (ix*ix <= iP) && (iFactor == 0) ) /* �[�J�]�ƭӼƪ��P�_ */
	{
		if( !(iP%ix) ) iFactor=1; /* �o�{�]��, �]�w iFactor ���e�� 1 �Y�i */
		ix++; /* ix ���W 1 */
    }
	if( iFactor == 0 ) printf("%d �O���\n",iP);
	else printf("%d ���O���\n",iP);
    system("pause");
    return(0);
}
