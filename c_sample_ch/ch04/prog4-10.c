#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix;
	printf("�п�J�@�Ӽƭ�:"); scanf("%d",&ix);
	if( ix%2 == 1 ) printf("�A��J���O %d �O�_��\n",ix);
	if( ix%2 == 0 ) printf("�A��J���O %d �O����\n",ix);
	system("pause");
	return(0);
}