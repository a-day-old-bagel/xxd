/*
 * include this header if you want to use xxd as a static lib.
 */

#ifndef XXD_XXD_H
#define XXD_XXD_H

#include <stdio.h>

/*
 * This works like normal xxd, except that you specify the default in and out files.
 * The defaults for normal xxd use are stdin and stdout, respectively.
 * If flags are provided in argv, they may override what you provide for in and out.
 */
int
xxd(FILE *in, FILE *out, int argc, char *argv[]);

#endif //XXD_XXD_H
