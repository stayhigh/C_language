#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iP, ix, iFactor;
	printf("��J�@�Ӥj�� 2 ����: ");
	scanf("%d",&iP); 
	ix = 2; iFactor = 0; /* ix �q 2 �}�l, iFacotr �� 0 */
	while( ix*ix < iP )
	{
		if( !(iP%ix) ) { /* ix ���]�� */
			if( iFactor == 0 ) printf("�]�Ʀ�: %3d %3d ",ix,iP/ix); /*���諸�]��*/
			else printf(" %3d %3d ",ix,iP/ix); /* ���諸�]�� */
			iFactor += 2; /* �@���D�o��Ӧ]��, �ҥH�Ӽƥ[ 2 */
		}
		ix++; /* ix ���W 1 */
    }
	if( ix*ix == iP ) { /*�ѨM iP ��n���� ix*ix �����D */
		if( iFactor == 0 ) printf("�]�Ʀ�: %3d ",ix);	
		else printf(" %3d ",ix); /* ��X�]�� */
		iFactor ++; /* iP=ix*ix ������, �]�ƥu���@��, �N�O ix */
	}
	if( iFactor == 0 ) printf("%d �O���\n",iP);
	else printf("\n�@�� %d �Ӧ]��\n",iFactor);
    system("pause");
    return(0);
}
