#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   char ch = 'A';
   short sj = 5;
   int ik = 3;
   float fx = 3.14f;
   double dz = 1.61;    
   printf("size = %d\n",sizeof((ch%sj)+(fx/ik)*(dz+ch/ik)));
   printf("(ch%%sj)+(fx/ik)*(dz+ch/ik)=%f\n",(ch%sj)+(fx/ik)*(dz+ch/ik));
   system("pause");
   return 0;
}