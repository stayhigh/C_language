#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int x=1;
	int y=10;
	int *pi = NULL; // 砞﹚夹跑计﹍ 00000000
	printf("Before &x = %p &y = %p pi = %p\n",&x,&y,pi);
	printf("x = %2d  y = %2d\n",x,y);
	pi = &x;		// pi 跑计 x
	*pi = *pi + 1;	// 单 x++
	printf("After *pi=*pi+1: *pi = %2d x = %2d pi = %p\n",*pi,x,pi);
	pi = &y;		// pi э跑计 y
	*pi = *pi + x;	// 单 y = y + x
	printf("After *pi=*pi+x: *pi = %2d y = %2d\n",*pi,y);
	(*pi)++;		// 单 y++, 狦糶Θ *pi++ 穦玻ネ岿粇
	printf("After   (*pi)++: *pi = %2d x = %2d y = %2d pi = %p\n",*pi,x,y,pi);
	system("pause"); return(0);
}