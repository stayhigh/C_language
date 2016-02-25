#include <stdio.h>
#include <stdlib.h>
#include "area.h" // 讀入 area.h 
int main(void)
{
	float l, h, r;
	printf("圓形的半徑為: "); scanf("%f",&r);
	printf("圓形的面積為: %1.2f\n",CIRCLE(r));
	printf("長方形的長與寬: "); scanf("%f %f",&l,&h);
	printf("長方形的面積為: %1.2f\n",RECTANGLE(l,h));
	system("pause"); return(0);
}