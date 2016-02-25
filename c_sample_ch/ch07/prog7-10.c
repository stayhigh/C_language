#include <stdio.h>
#include <stdlib.h>
int IsPrime(int);
int main(void)
{
	int i;
	printf("1  10000 丁借计Τ:\n");
	for( i = 1; i <= 10000 ; i++ ) 
		if( IsPrime(i) ) printf("%5d",i);
	printf("\n");
	system("pause"); return(0);
}
int IsPrime(int iP) 
{
	int ix = 2; // ix 眖 2 秨﹍
	if( iP <= 1 ) return(0); // 磷秨() 1 计
	while( ix*ix <= iP ) // 惠璶磅︽腹(iP)
	{
		if( !(iP%ix) ) return(0);// 祇瞷计, 硂计ぃ琌借计
		ix++; // ix 患糤 1
    }
	return(1); // 筁祘常ゼ祇瞷计,┮硂计借计
}