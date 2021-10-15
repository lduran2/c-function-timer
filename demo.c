/** ./demo.c
 * Runs an example of testing a simple function.
 * By      : Leomar Duran <https://github.com/lduran2/>
 * When    : 2021-10-14t22:36
 * For     : CIS 3207 Assignment 4
 * Version : 1.0
 * Canonical: <https://github.com/lduran2/c-function-timer/blob/master/demo.c>
 *
 * CHANGELOG:
 *     v1.0 - 2021-10-14t12:52
 *         testing the printf
 *
 *     v0.0 - 2021-10-14t12:52
 *         initial commit
 */

#include <stdio.h>	/* for printf */
#include "fntimer.h"	/* for fntime */

int main(int argc, char ** argv) {
	/* test 5 calls to printf */
	fntime(5, (Timeable *)printf, "Hello world!\n");
	return 0;
} /* int main(int argc, char ** argv) */

