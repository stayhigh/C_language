#include <stdio.h>
#include <stdlib.h>
void swap(int *,int *); // 交換兩個引數的內容
void swap(int *x,int *y)
{
	int temp;
	temp=*x; *x=*y; *y=temp; // 等同於 temp = a; a = b; b = temp;
	printf("In swap...\n");
	printf("x=%d,y=%d\n",*x,*y);  /* 輸出在函式中交*/
	printf("x 的右值: %p, y 的右值: %p\n",x,y);
	printf("x 的左值: %p, y 的左值: %p\n",&x,&y);
}
int main()
{
	int a=5,b=10;
	printf("In main... Before Swap\n");
	printf("a=%d,b=%d\n",a,b); printf("a 的位址: %p, b 的位址: %p\n",&a,&b);
	swap(&a,&b);  // 以傳指標的方式傳遞 a, b 的位址
	printf("In main... After Swap\n");
	printf("a=%d,b=%d\n",a,b); printf("a 的位址: %p, b 的位址: %p\n",&a,&b);
	system("pause"); return(0);
}