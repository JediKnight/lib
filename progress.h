#ifndef _PROGRESS_H_
#define _PROGRESS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/ioctl.h>

#ifndef _BOOLEAN_
#define _BOOLEAN_

typedef int boolean;
#undef FALSE
boolean FALSE = 0;
#undef TRUE
boolean TRUE = 1;

#endif	/* _BOOLEAN */

/* 既定文字列 */
#define DECOR "[] [xxx%]"

/* calcperc() */
#define calcperc(x,y) (((x) * 100) / (y))
#define calcleng(x,y) (((x) * (y)) / 100)
void proginit();
void progend();
void showprog(int perc);

#endif	/* _PROGRESS_H_ */
