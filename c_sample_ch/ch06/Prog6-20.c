#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, s;
	int iAtoZ[26] = {0}; /* �]�w��l�Ȭ� 0 */
	int iVowel[5] = {97,101,105,111,117};
	char ch; /* ������J���r�� */
	printf("��J�@�q�^��y�l,�H#�N����\n");
	while ( (ch = getchar()) != '#')
	{
		if( ch >= 'A' && ch <= 'Z' )  /*�O�_���� A �� Z ���� */
			iAtoZ[ch-65]++; /* �۹����쪺�x�s��m���e�[ 1 */
		else if (ch >= 'a' && ch <= 'z' )
			iAtoZ[ch-97]++; /* �۹����쪺�x�s��m���e�[ 1 */
    }
	printf("��ܿ�X�����e 1:(����), 2:(����): ");
	scanf("%d",&s);
	if( s == 1 ) {
		for( i = 0 ; i < 26 ; i++ ) /* �ˬd�C�@�Ӧr�����X�{���� */
			if( iAtoZ[i] != 0 ) printf("%c �X�{ %2d ��\n",i+97,iAtoZ[i]);
	}
	else {
		for( i = 0 ; i < 5 ; i++ ) /* �ˬd�C�@�Ӧr�����X�{���� */
			printf("%c �X�{ %2d ��\n",iVowel[i],iAtoZ[iVowel[i]-97]);
	}
    system("pause");
	return(0);
}