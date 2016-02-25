#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	unsigned int ix;
	printf("sizeof(char) = %d\n",sizeof(char));
	printf("sizeof(short) = %d\n",sizeof(short));
	printf("sizeof(int) = %d\n",sizeof(int));
	printf("sizeof(long) = %d\n",sizeof(long));
	printf("sizeof(float) = %d\n",sizeof(float));
	printf("sizeof(double) = %d\n",sizeof(double) );
	printf("sizeof(ix) = %d\n",sizeof(ix) );
	printf("sizeof(12) = %d\n",sizeof(12));
	printf("sizeof(1.24) = %d\n",sizeof(1.24));
	system("pause");
	return(0);
}