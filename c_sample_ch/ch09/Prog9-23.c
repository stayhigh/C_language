#include <stdio.h>
#include <stdlib.h>
typedef int   INT; // INT 就代表 int 型別 
typedef float FOT; // FOT 就代表 float 型別 
int main(void)
{
	INT iX = 1;	// 等同於 int iX = 1;
	FOT fY = 1.2f;	// 等同於 float fY = 1;
	printf(" iX = %d fY = %f\n",iX, fY);
	system("pause"); return(0);
}