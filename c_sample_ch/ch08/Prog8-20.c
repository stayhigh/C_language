#include <stdio.h>
#include <stdlib.h>
void swap(int *,int *);
void swap(int *a,int *b) // ユ传 a 籔 b ┮跑计ず甧
{
	int t;
	t=*a; *a=*b; *b=t;
}
int main(void)
{
	int A[6] = {23,31,3,19,54,12}; /*砞﹚皚﹍*/
	int i, j, min;
	int *piA = A; // 砞﹚ piA 皚A秨繷
	for( j = 0; j < 6 ; j++ ) printf("%4d",*(piA+j));
	printf("\n");
	for( i = 0 ; i < 5 ; i++ ) {
		min = i; /*安砞ヘ玡程计琌A[min] */
		for( j = i+1 ; j < 6 ; j++ ) 
			if( *(piA+min) > *(piA+j) ) min = j; // 癘程计ま
		swap(piA+i,piA+min); // ユ传 A[min] 籔 A[i] ず甧
		for( j = 0; j < 6; j++ ) printf("%4d",A[j]);
		printf("\n");
	}
	system("pause"); return (0);
}