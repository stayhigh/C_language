#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iP, ix, iFactor;
	printf("��J�@�Ӥj�� 2 ����: "); 
	scanf("%d",&iP); /* ���]��J���Ƴ��|�j�� 2 */
	ix = 2; iFactor = 0; /* ix �q 2 �}�l, iFacotr �� 0 */
	while( ix <= iP - 1)
	{
		if( !(iP%ix) ) { /* ix ���]�� */
			if( iFactor == 0 ) printf("�]�Ʀ�: %3d ",ix); /* �Ĥ@����X�]�� */
			else printf(" %3d ",ix); /* ��X��L�]�� */
			iFactor++; /* �]�ƪ��Ӽƥ[ 1 */
		}
		ix++; /* ix ���W 1 */
    }
	if( iFactor == 0 ) printf("%d �O���\n",iP);
    system("pause");
    return(0);
}
