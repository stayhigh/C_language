#include <stdio.h>
#include <stdlib.h>
typedef int   INT; // INT �N�N�� int ���O 
typedef float FOT; // FOT �N�N�� float ���O 
int main(void)
{
	INT iX = 1;	// ���P�� int iX = 1;
	FOT fY = 1.2f;	// ���P�� float fY = 1;
	printf(" iX = %d fY = %f\n",iX, fY);
	system("pause"); return(0);
}