/** ./demo.c
 * Runs an example of testing a simple function.
 * By      : Leomar Duran <https://github.com/lduran2/>
 * When    : 2021-10-15t03:49
 * For     : CIS 3207 Assignment 4
 * Version : 1.1
 * Canonical: <https://github.com/lduran2/c-function-timer/blob/master/demo.c>
 *
 * CHANGELOG:
 *     v1.1 - 2021-10-15t03:49
 *         print the average time elapsed
 *
 *     v1.0 - 2021-10-14t12:52
 *         testing the printf
 *
 *     v0.0 - 2021-10-14t12:52
 *         initial commit
 */

#include <stdio.h>	/* for printf */
#include "fntimer.h"	/* for fntime */

int main(int argc, char ** argv) {
	double printf_test;
	/* test 5 calls to printf */
	printf_test = fntime(5, (Timeable *)printf, "Hello world!\n");
	printf("%f\n", printf_test);
	return 0;
} /* int main(int argc, char ** argv) */

