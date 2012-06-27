#include "util.h"

int usage(Opt_Data *od, int odnm)
{
  int i;
  char *ptmp;
  
  for(i = 0; i < odnm; i++)
    {
      printf("-%-2c--%-10s%s\n", od[i].sopt, od[i].lopt, od[i].msg);
    }

  return 0;
}

int mkshortopt(Opt_Data *od, int odnm)
{
  int i;
  char sopts[128], tmp[128];

  for(i = 0; i < odnm; i++)
    {
      if(od[i].aflg == TRUE)
	{
	  sprintf(tmp, "%c:", od[i].sopt);
	}

      else
	{
	  sprintf(tmp, "%c", od[i].sopt);
	}

      strcat(sopts, tmp);
    }


  printf("%s\n", sopts);
  return 0;
}

int main()
{
  Opt_Data odata[] = {
    {.sopt = 'a', .lopt = "add", .msg = "", .aflg = TRUE},
    {.sopt = 'e', .lopt = "edit", .msg = "", .aflg = FALSE},
    {.sopt = 'd', .lopt = "delete", .msg = "", .aflg = FALSE}};

  usage(odata, (sizeof(odata) / sizeof(odata[0])));
  mkshortopt(odata, (sizeof(odata) / sizeof(odata[0])));

  return 0;
}
