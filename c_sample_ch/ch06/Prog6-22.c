#include <stdio.h>
#include <stdlib.h> 
#include <time.h>  
int main(void)
{
	int i;
	float fnum[12], fmax, fmin;
	srand( (unsigned)time( NULL ) );
	for( i = 0 ; i < 12 ; i++ ) {
		fnum[i]= 100.0f*(float)rand()/RAND_MAX;
		printf("%5.2f ",fnum[i]);
		if( (i+1)%3 == 0 ) printf("\n"); /* �C�T�Ӽƴ��@�� */
	}
	fmin = fmax = fnum[0]; /* fmin �P fmax ���]�w���}�C���Ĥ@�Ӽ� */
	for( i = 1 ; i < 12 ; i++ ) { /* �q��2�Ӽƶ}�l�N��F */
		if( fnum[i]<fmin ) fmin = fnum[i];/*�̤p�Ƥ�ثe�����٤p */
		else if( fmax<fnum[i] ) fmax = fnum[i];/*�ثe���Ƥ�̤j���٤j */
	}
	printf("�̤j�� = %5.2f\n�̤p�� = %5.2f\n",fmax, fmin);
	system("pause");
	return(0);
}