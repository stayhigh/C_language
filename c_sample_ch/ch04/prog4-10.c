#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix;
	printf("叫块计:"); scanf("%d",&ix);
	if( ix%2 == 1 ) printf("块琌 %d 琌计\n",ix);
	if( ix%2 == 0 ) printf("块琌 %d 琌案计\n",ix);
	system("pause");
	return(0);
}