#include <stdio.h>
#include <stdlib.h>
void Update(int [], int); // �쫬�ŧi, �޼�2 �q�`�|�ǻ��}�C���j�p
void Update(int Ary[], int n) {
	int i;
	for( i = 0 ; i < n ; i++ ) {
		if( Ary[i]%2 ) Ary[i]++; // �_��,���e�[1
		else Ary[i]--; // ���Ƽ�,���e��1
	}
}
int main(void)
{
	int i;
	int iNum[6] = {23,46,37,51,48,9};
	printf("Before Update: ");
	for( i = 0 ; i < 6 ; i++ ) printf("%2d ",iNum[i]);
	printf("\n");
	Update(iNum, 6);
	printf("After  Update: ");
	for( i = 0 ; i < 6 ; i++ ) printf("%2d ",iNum[i]);
	printf("\n");
    system("pause"); return(0);
}