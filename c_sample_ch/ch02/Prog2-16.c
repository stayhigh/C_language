#include <stdio.h>
#include <stdlib.h>
int main() 
{
	int ix, iy, iz, ir;
	float fy, fr;
	ix = 4; iz = 2; iy = 3; fy = 3.0f;
	ir = 2/3; printf("2/3 = %d\n",ir);
	fr = iz/iy; printf("iz(2)/iy(3) = %1.5f\n",fr);
	ir = ix/fy; printf("ix(4)/fy(3.0f) = %d\n",ir);
	fr = ix/fy; printf("ix(4)/fy(3.0f) = %1.5f\n",fr);
	// �H�U���ԭz�����F�B�I�ƪ��w�]��ƫ��O
	printf("1.0f/3.0f = %1.12f\n",1.0f/3.0f); //float
	printf("1.0/3.0f = %1.12f\n",1.0/3.0f);	// double
 	system("pause");
	return(0);
}