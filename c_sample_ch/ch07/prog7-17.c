#include <stdio.h>
#include <stdlib.h>
int Search(int [][4], int, int, int); // �쫬�ŧi, �޼�2 �q�`�|�ǻ��}�C���j�p
int Search(int Ary[][4], int target, int rn, int cn) {
	int i, j;
	for( i = 0 ; i < rn ; i++ ) 
		for( j = 0 ; j < cn ; j++ ) 
		if( Ary[i][j] == target ) return(1); // �����w����, �Ǧ^1 
	return(-1); // �S�����,�Ǧ^ -1
}
int main(void)
{
	int iGuess, ret;
	int iNum[3][4] = {{2,48,94,23},{56,37,71,63},{19,82,17,39}};
	do {
		printf("��J1-100�����q������: ");
		scanf("%d",&iGuess);
		ret = Search(iNum, iGuess, 3, 4); //�I�s Search �禡�i��j�M
		if( ret == 1 ) printf("��J�����x�s�b�}�C��\n");
		else printf("�A��J���Ƥ��s�b\n",ret);
	} while( ret == -1 ); // ���J���Ƨ䤣���,�~�����
    system("pause"); return(0);
}