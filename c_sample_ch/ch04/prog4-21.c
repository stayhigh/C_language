#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int iKilled = 0; /* �����Ǫ����Ӽ� */
	char ch; /* �x�s�ϥΪ̪���J */
	while( iKilled < 5 )  /*������ 5 ���N��F */
	{
		printf("���ѨM�@���Ův��:"); 
		scanf("%c",&ch);
		if( ch == 'Y' || ch == 'y' )
		{
			iKilled++;
			printf("�w�g�ѨM %d ���Ův\n",iKilled);
		}
		fflush(stdin); /* �M����J�w�İϪ����e */
	}
	printf("���ȧ���,�w�g�ѨM %d ���Ův\n",iKilled);
	system("pause");
	return 0;
}