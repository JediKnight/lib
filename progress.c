#include "progress.h"

boolean proginit()
{
  return FALSE;
}

boolean progend()
{
  return TRUE;
}

void progbar(char **ptr, char c, int len)
{
  int i;

  for(i = 0; i < len; ptr[i++] = &c);
  printf("%c : %d\n", c, len);
}

boolean showprog(int perc)
{
  struct winsize ws;
  char *cmp;
  char *spc;
  int cols;
  int cmplen;

  ioctl(STDOUT_FILENO, TIOCGWINSZ, &ws);
  cols = (ws.ws_col - strlen(DECOR));

  cmplen = calcleng(perc, cols);

  cmp = malloc(sizeof(char) * cols);
  memset(cmp, 0, sizeof(cmp));

  spc = malloc(sizeof(char) * cols);
  memset(spc, 0, sizeof(spc));

  progbar(&cmp, '#', cmplen);
  progbar(&spc, '_', (cols - cmplen));

  /* printf("%d : %d\n", calcleng(perc, cols), (cols - calcleng(perc, cols))); */

  printf("[%s%s] [%-3d%%]\n", cmp, spc, perc);
  /* printf("%s", CURSOR_LEFT); */

  free(cmp);
  free(spc);
  
  return TRUE;
}

void func(char **a)
{
  char tmp[10];
  int i;

  for(i = 0; i < 10; tmp[i++] = 'c');
  *a = tmp;
}

int main(int argc, char **argv)
{
  int perc;
  /* int i; */

  char *a;

  /* if(argc < 2) goto end; */

  /* proginit(); */

  /* for(i = 0; i <= 416; i++) */
  /*   { */
  /*     perc = calcperc(i, 416); */
  /*     showprog(perc); */
  /*   } */

  /* progend(); */

  printf("befor: %d\n", (int)sizeof(a));

  a = malloc(sizeof(char) * 10);
  memset(a, 0, sizeof(a));

  printf("after: %d\n", (int)sizeof(a));

  func(&a);
  printf("%s\n", a);

 end:

  return 0;
}
