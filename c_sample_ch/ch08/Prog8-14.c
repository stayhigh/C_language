#include <stdio.h>
#include <stdlib.h>
int Add(int, int);		// Add �禡���쫬�ŧi 
int Product(int, int);	// Product �禡���쫬�ŧi 
int Add(int x, int y) {
	return(x+y);
}
int Product(int x, int y) {
	return(x*y);
} 
int main(void)   
{   
	int a = 2, b = 5;
	int ret; 
	int (*pfun)(int, int); // �禡���Ыŧi 
	pfun = Add;
	ret = pfun(a,b); // �]�w���V Add �禡
	printf("Add(%d,%d) = %d\n",a,b,ret);
	pfun = Product;  // �]�w���V Product �禡
	ret = pfun(a,b);
	printf("Product(%d,%d) = %d\n",a,b,ret);
	system("pause"); return (0);   
 }  