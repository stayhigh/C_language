#include <stdio.h>
#include <stdlib.h>
int Search(int [], int, int); // �쫬�ŧi
int Search(int Ary[], int target, int n) {
	int i;
	for( i = 0 ; i < n ; i++ ) 
		if( Ary[i] == target ) return(i); // �����w����, �Ǧ^���ޭ�
	return(-1); // �S�����,�Ǧ^ -1
}
int main(void)
{
	int iGuess, ret;
	int iNum[12] = {2,48,94,23,56,37,71,63,19,82,17,39};
	do {
		printf("��J1-100�����q������: ");
		scanf("%d",&iGuess);
		ret = Search(iNum, iGuess, 12); //�I�s Search �禡�i��j�M
		if( ret >= 0 ) printf("��J�����x�s�b�}�C�� %d ����m\n",ret);
		else printf("�A��J���Ƥ��s�b\n",ret);
	} while( ret == -1 ); // ���J���Ƨ䤣���,�~�����
    system("pause"); return(0);
}