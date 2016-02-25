#include <stdio.h>
#include <stdlib.h>
int Add(int, int);		// Add 函式的原型宣告 
int Product(int, int);	// Product 函式的原型宣告 
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
	int (*pfun)(int, int); // 函式指標宣告 
	pfun = Add;
	ret = pfun(a,b); // 設定指向 Add 函式
	printf("Add(%d,%d) = %d\n",a,b,ret);
	pfun = Product;  // 設定指向 Product 函式
	ret = pfun(a,b);
	printf("Product(%d,%d) = %d\n",a,b,ret);
	system("pause"); return (0);   
 }  