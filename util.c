#include "util.h"

int usage(Options *od, int odnm)
{
  int i;
  char *ptmp;
  
  for(i = 0; i < odnm; i++)
    {
<<<<<<< HEAD
      printf("-%-2c--%-10s%s\n", od[i].arg_short, od[i].arg_long, od[i].memo);
=======
      printf("-%-2c--%-10s%s\n", od[i].sopt, od[i].lopt, od[i].msg);
>>>>>>> 81cbf0029e98a2ab6fd935bcb60d4308d0f85e2e
    }

  return 0;
}

int mkshortopt(Opt_Data *od, int odnm)
{
<<<<<<< HEAD
  Options options[] = {
    { .arg_short = 'a' , .arg_long = "add"    , .arg_flg = FALSE , .memo = "" },
    { .arg_short = 'd' , .arg_long = "delete" , .arg_flg = TRUE  , .memo = "= id" },
    { .arg_short = 'e' , .arg_long = "edit"   , .arg_flg = FALSE , .memo = "" },
    { .arg_short = 'p' , .arg_long = "passwd" , .arg_flg = TRUE  , .memo = "= pass phrease" },
    { .arg_short = 'u' , .arg_long = "user"   , .arg_flg = TRUE  , .memo = "= user name" }
  };

  int optnm = (sizeof(options) / sizeof(options[0]));

  usage(options, optnm);
=======
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
>>>>>>> 81cbf0029e98a2ab6fd935bcb60d4308d0f85e2e

  return 0;
}
