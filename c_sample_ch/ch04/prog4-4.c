#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int ix = 3, iy = 2,iz = 2;
	printf("3 && 4 > 5 = %d\n", 3  && 4 > 5);
	printf("3 > 2 || 1 > 2  = %d\n", 3 > 2 || 1 > 2);
	printf("!(3 > 2) = %d\n", !(3 > 2));
	printf("(ix>iy||ix>iz)&&(ix>iy*iz)=%d\n",(ix>iy||ix>iz)&&(ix>iy*iz)); 
	system("pause");
	return(0);
}
