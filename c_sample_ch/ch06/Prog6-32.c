#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i, j; // �~�P���j���ܼ�
	// �ŧi�ɪ������w�P��q
	int Item[3][4] = {{12,45,10,5}, 	
					  {20,5,31,25},
					  {30,20,14,8}};
	int AreaSale[4] = {0}; // �x�s�C�@�Ϫ��`�P��q
	int ItemSale[3] = {0}; // �x�s�C�@�����`�P��q
	for( i = 0 ; i < 3 ; i++ ) // �p��ӫ~���`�P��q
		for( j = 0 ; j < 4 ; j++ ) // �H�C�@�C���̾�,�[�`�ӦC�����Ҧ����e
			ItemSale[i] = ItemSale[i] + Item[i][j];
	for( j = 0 ; j < 4 ; j++ ) // �p��ӫ~�b�C�@�Ϫ��P��q
		for( i = 0 ; i < 3 ; i++ ) // �H�C�@�欰�̾�,�[�`�Ӧ椺���Ҧ����e
			AreaSale[j] = AreaSale[j] + Item[i][j];
	// ��X�U�ϻP�U�ӫ~���P��q
	printf("       �F�� �n�� ��� �_��  �`�P�q\n");
	for( i = 0 ; i < 3 ; i++ ) {
		printf("�ӫ~%2d ",i+1);
		for( j = 0 ; j < 4 ; j++ ) 	printf("%4d ",Item[i][j] );
		printf("%3d \n",ItemSale[i]); // ��X�`�P��q
	}
	printf("�`�P�q ");
	for( j = 0 ; j < 4 ; j++ ) 	printf("%4d ",AreaSale[j] ); 
	printf("\n");
	system("pause"); return(0);
}