#include "util.h"

int usage(Opt_Data *od, int odnm)
{
  int i;
  
  for(i = 0; i < odnm; i++)
    {
      printf("-%-2c--%-10s%30s\n", od[i].sopt, od[i].lopt, od[i].msg);
    }

  return 0;
}

int main()
{
  Opt_Data odata[3];

  odata[0].sopt = 'a';
  odata[0].lopt = "add";
  odata[0].msg = "";
  odata[0].aflg = TRUE;

  odata[1].sopt = 'e';
  odata[1].lopt = "edit";
  odata[1].msg = "";
  odata[1].aflg = FALSE;

  odata[2].sopt = 'd';
  odata[2].lopt = "delete";
  odata[2].msg = "";
  odata[2].aflg = FALSE;

  usage(odata, (sizeof(odata) / sizeof(odata[0])));

  return 0;
}
