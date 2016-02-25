#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a,b,c,d,e,f;
	int minx, miny, min;
	a = 5;b = 3; c = 10;
	d = 1; e = 7; f = 4;
	if( a < b ) 
		if (a < c) minx = a;
		else minx = c;
	else 
		if( b < c ) minx = b;
		else  minx = c;

	if( d < e ) 
		if( d < f ) miny = d;
		else miny = f;
	else 
		if( e < f ) miny = e;
		else miny = f;
	min = minx < miny ? minx : miny;
	printf("最小數為: %d\n", min);
	system("pause"); return (0);
}
