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

/* エスケープシーケンス */
#define DEL_SCREEN	"\x1b[2J"
#define DEL_LINE	"\x1b[K"
#define CURSOR_UP	"\x1b[1A"
#define CURSOR_DOWN	"\x1b[1B"
#define CURSOR_RIGHT	"\x1b[1C"
#define CURSOR_LEFT	"\x1b[151D"

/* 既定文字列 */
#define DECOR "[] [xxx%]"

/* calcperc() */
#define calcperc(x,y) (((x) * 100) / (y))
#define calcleng(x,y) (((x) * (y)) / 100)
boolean proginit();
boolean progend();
boolean showprog(int perc);

#endif	/* _PROGRESS_H_ */
