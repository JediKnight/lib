#include "util.h"

int usage(Options *od, int odnm)
{
  int i;
  
  for(i = 0; i < odnm; i++)
    {
      printf("-%-2c--%-10s%s\n", od[i].arg_short, od[i].arg_long, od[i].memo);
    }

  return 0;
}

int main()
{
  Options options[] = {
    { .arg_short = 'a' , .arg_long = "add"    , .arg_flg = FALSE , .memo = "" },
    { .arg_short = 'd' , .arg_long = "delete" , .arg_flg = TRUE  , .memo = "= id" },
    { .arg_short = 'e' , .arg_long = "edit"   , .arg_flg = FALSE , .memo = "" },
    { .arg_short = 'p' , .arg_long = "passwd" , .arg_flg = TRUE  , .memo = "= pass phrease" },
    { .arg_short = 'u' , .arg_long = "user"   , .arg_flg = TRUE  , .memo = "= user name" }
  };

  int optnm = (sizeof(options) / sizeof(options[0]));

  usage(options, optnm);

  return 0;
}
