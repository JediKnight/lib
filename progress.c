#include "progress.h"

boolean proginit()
{
}

boolean progend()
{
}

boolean showprog(int perc)
{
  /* 端末の状態を保存 */
  printf("%s[%s%s] [%3d%%]", CURSOR_DOWN, "##", "__", perc);
  /* 元の状態に戻す */
  
  return TRUE;
}

int main()
{
  int perc = calcperc(19, 100);

  showprog(perc);
  return 0;
}
