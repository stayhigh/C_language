#include <stdio.h>
#include <stdlib.h>
int Search(int [][4], int, int, int, int []); // �쫬�ŧi,�ݭn�|�Ӥ޼�
int Search(int Ary[][4], int target, int n, int m, int Idx[]) {
	int i, j;
	for( i = 0 ; i < n ; i++ ) 
		for( j = 0 ; j < m ; j++ ) 
			if( Ary[i][j] == target ) {
				Idx[0] = i; Idx[1] = j; // ���ɡA�N���ޭ��x�s�� Idx �}�C��
				return(1); // �����w����, �Ǧ^1 
			}
	return(-1); // �S�����,�Ǧ^ -1
}
int main(void)
{
	int iGuess, ret;
	int Idx[2]; // �x�s�^�Ǫ���ӯ��ޭ�
	int iNum[3][4] = {{2,48,94,23},{56,37,71,63},{19,82,17,39}};
	do {
		printf("��J1-100�����q������: ");
		scanf("%d",&iGuess);
		ret = Search(iNum, iGuess, 3, 4, Idx); //�I�s Search �禡�i��j�M
		if( ret == 1 ) printf("��J�����x�s�b�}�C [%d][%d] ����m\n",Idx[0],Idx[1]);
		else printf("�A��J���Ƥ��s�b\n",ret);
	} while( ret == -1); // ���J���Ƨ䤣���,�~�����
    system("pause"); return(0);
}