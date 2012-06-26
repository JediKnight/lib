#ifndef _UTIL_H_
#define _UTIL_H_

#include <stdio.h>

typedef int boolean;
#undef FALSE
#undef TRUE
const boolean FALSE = 0;
const boolean TRUE = 1;

typedef struct { char sopt; char *lopt; char *msg; boolean aflg; } Opt_Data;

#endif	/* _UTIL_H_ */
