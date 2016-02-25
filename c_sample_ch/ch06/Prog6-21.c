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
	fmin = 101; fmax = -1; 
	/* min 砞﹚Θ絛瞅伐max 砞﹚Θ絛瞅伐 */
	for( i = 0 ; i < 12 ; i++ ) {
		if( fnum[i]<fmin ) fmin = fnum[i];/*程计ゑヘ玡计临 */
		if( fmax<fnum[i] ) fmax = fnum[i];/*ヘ玡计ゑ程计临 */
	}
	printf("程 = %5.2f\n程 = %5.2f\n",fmax, fmin);
	system("pause");
	return(0);
}