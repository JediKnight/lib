#ifndef _PROGRESS_H_
#define _PROGRESS_H_

#include <stdio.h>

#ifndef _BOOLEAN_
#define _BOOLEAN_

typedef int boolean;
#undef FALSE
boolean FALSE = 0;
#undef TRUE
boolean TRUE = 1;

#endif	/* _BOOLEAN */

/* エスケープシーケンス */
/*  = C-q C-[ */
#define DEL_SCREEN	"[2J"
#define DEL_LINE	"[K"
#define CURSOR_UP	"[1A"
#define CURSOR_DOWN	"[1B"
#define CURSOR_RIGHT	"[1C"
#define CURSOR_LEFT	"[1D"

/* calcperc() */
#define calcperc(x,y) (((x) * 100) / (y))
boolean proginit();
boolean progend();
boolean showprog(int perc);

#endif	/* _PROGRESS_H_ */
