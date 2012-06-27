#ifndef _UTIL_H_
#define _UTIL_H_

#include <stdio.h>

#ifndef _BOOLEAN_
#define _BOOLEAN_
typedef int boolean;
#undef FALSE
const boolean FALSE = 0;
#undef TRUE
const boolean TRUE = 1;
#endif	/* _BOOLEAN */

typedef struct { char arg_short; char *arg_long; boolean arg_flg; char *memo; } Options;

#endif	/* _UTIL_H_ */
