#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
	int i, ix, iz;
	srand((unsigned)time(NULL)); 
	ix = rand()%10; /* �H�����ͤ���0��9���� */
	for( i = 1, iz = -1; i <=4 && ix != iz ; i++ ) {
		printf("�� %d ���q��(��J0 ~ 9):",i);
		scanf("%d",&iz);
	}
	if( ix == iz ) printf("���ߧA�q��F\n");
	else printf("���T���Ʀr�� %d\n",ix);
	system("pause");
	return(0);
}