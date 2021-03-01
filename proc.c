#include "proc.h"

void proc()
{
  //首先你应该定义一个数组，在这个数组里面我希望能够随着进度条的增加，‘#’的个数也在增加，最后在以字符串的形式将其打印出来，但是这里你不要忘记了，字符串的最后一定要带一个‘\0’
  char bar[NUM];
  const char* lable = "|/-\\"; 
  //但是你如果是每增加一个你的\0就往后推一个，那么太过麻烦，还不如一开始就直接给数组里面的内容直接定义为\0
  memset(bar,'\0',sizeof(bar));
  int i = 0;
  while(i < 100)
  {
    bar[i++] = '#';
    //进度条的百分比和进度条的旋转光标
    printf("[%-100s][%d%%][%c]\r",bar,i,lable[i%4]);
    fflush(stdout);
    usleep(10000);
  }
  printf("\n");
}
