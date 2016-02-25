#include <stdio.h>
#include <stdlib.h>
typedef char *PCHAR ;
typedef char STRING[10];
int main(void)
{
	PCHAR  cName1 = "John";
	STRING cName2 = "Mary";
	printf("cName1 = %s, sizeof(cName1) = %d\n",cName1, sizeof(cName1));
	printf("cName2 = %s, sizeof(cName2) = %d\n",cName2, sizeof(cName2));
	system("pause"); return(0);
}