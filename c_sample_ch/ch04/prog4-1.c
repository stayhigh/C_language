#include <stdio.h>
#include <stdlib.h>
#define CYCLE 4
int main(void)
{
  int ix = 9;
  ix=ix+1;printf("%d %% %d = %d\n",ix,CYCLE,ix%CYCLE);
  ix=ix+1;printf("%d %% %d = %d\n",ix,CYCLE,ix%CYCLE);
  ix=ix+1;printf("%d %% %d = %d\n",ix,CYCLE,ix%CYCLE);
  ix=ix+1;printf("%d %% %d = %d\n",ix,CYCLE,ix%CYCLE);
  ix=ix+1;printf("%d %% %d = %d\n",ix,CYCLE,ix%CYCLE);
  system("pause");
  return(0);
}
