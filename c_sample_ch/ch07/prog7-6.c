#include <stdio.h>
#include <stdlib.h>
int FindingMin(int, int, int);
int main(void)
{
	int a,b,c,d,e,f;
	int minx, miny, min;
	a = 5;b = 3; c = 10;
	d = 1; e = 7; f = 4;
	minx = FindingMin(a, b, c);
	miny = FindingMin(d, e, f);
	min = minx < miny ? minx : miny;
	printf("最小數為: %d\n", min);
	system("pause"); return(0);
}
int FindingMin(int x, int y, int z) 
{
	int min;
	if(x < y) { 
		if (x < z) min = x;
		else min = z;
	}
	else {
		if(y < z) min = y;
		else min = z;
	}
	return(min);
}