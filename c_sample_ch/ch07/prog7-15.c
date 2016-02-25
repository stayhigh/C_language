#include <stdio.h>
#include <stdlib.h>
void Update(int [], int); // , ま计2 硄盽穦肚患皚
void Update(int Ary[], int n) {
	int i;
	for( i = 0 ; i < n ; i++ ) {
		if( Ary[i]%2 ) Ary[i]++; // 计,ず甧1
		else Ary[i]--; // 案计计,ず甧搭1
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