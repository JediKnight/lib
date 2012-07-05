#include "progress.h"

void proginit()
{
  printf("\x1b[>5h");
}

void progend()
{
  printf("\x1b[>5l\n");
}

void progbar(char *ptr, char c, int len)
{
  int i;

  for(i = 0; i < len; ptr[i++] = c);
}

void showprog(int perc)
{
  struct winsize ws;
  char *cmp;
  char *spc;
  int cols;
  int cmplen;

  ioctl(STDOUT_FILENO, TIOCGWINSZ, &ws);
  cols = (ws.ws_col - strlen(DECOR));

  cmplen = calcleng(perc, cols);

  cmp = (char *)malloc(sizeof(char) * cols);
  spc = (char *)malloc(sizeof(char) * cols);

  memset(cmp, 0, malloc_usable_size(cmp));
  memset(spc, 0, malloc_usable_size(spc));

  progbar(&cmp[0], '#', cmplen);
  progbar(&spc[0], '_', (cols - cmplen));

  printf("[%s%s] [%3d%%]\n", cmp, spc, perc);
  printf("\x1b[1A");

  free(cmp);
  free(spc);
}

int main(int argc, char **argv)
{
  int perc;
  int i;

  if(argc < 2) goto end;

  proginit();

  /* for(i = 0; i <= atoi(argv[1]); i++) */
  /*   { */
  /*     perc = calcperc(i, atoi(argv[1])); */
  /*     showprog(perc); */
  /*   } */

  /* progend(); */

 end:

  return 0;
}
