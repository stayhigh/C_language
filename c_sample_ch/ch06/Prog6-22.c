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
		if( (i+1)%3 == 0 ) printf("\n"); /* –计传︽ */
	}
	fmin = fmax = fnum[0]; /* fmin 籔 fmax 常砞﹚Θ皚材计 */
	for( i = 1 ; i < 12 ; i++ ) { /* 眖材2计秨﹍碞︽ */
		if( fnum[i]<fmin ) fmin = fnum[i];/*程计ゑヘ玡计临 */
		else if( fmax<fnum[i] ) fmax = fnum[i];/*ヘ玡计ゑ程计临 */
	}
	printf("程 = %5.2f\n程 = %5.2f\n",fmax, fmin);
	system("pause");
	return(0);
}