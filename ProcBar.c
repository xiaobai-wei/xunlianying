#include "ProcBar.h"

void process_bar()
{
  char bar[NUM];
  memset(bar,'\0',sizeof(bar));
  int i =0;
  const char* label="|/-\\";
  while(i<=100){
  printf("[%-100s],[%-3d%%],[%c]\r",bar,i,label[i%4]);
    fflush(stdout);
    bar[i++]='#';
    usleep(50000);
  }
  printf("\n");
}
