#include <stdio.h>
#include <stdlib.h>
#define SQUARE(X) (X)*(X)	 // �p�⥭�誺����
int main() {
	float x, y = 2.0f;
	x = SQUARE(y);		// �i�}�ᬰ x = (y)*(y);
	printf("%1.0f^2 = %f\n",y,x);
	x = 1/SQUARE(y);	// �i�}�ᬰ x = 1/(y)*(y);
	printf("1/%1.0f^2 = %f\n",y,x);
	system("pause"); return(0);
}