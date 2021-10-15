/** ./fntimer.c
 * Times a given function.
 * By      : Leomar Duran <https://github.com/lduran2/>
 * When    : 2021-10-14t22:35
 * For     : CIS 3207 Assignment 4
 * Version : 1.0
 * Canonical: <https://github.com/lduran2/c-function-timer/blob/master/fntimer.c>
 *
 * CHANGELOG:
 *     v1.0 - 2021-10-14t22:35
 *         attempt using single void pointer
 *
 *     v0.0 - 2021-10-14t16:50
 *         attempt using varargs
 */

#include "fntimer.h"
#include <sys/time.h>	/* for struct timeval */
#include <stdio.h>

double fntime(int n_reps, Timeable func, void * arg) {
	double mean_time = 0.0;
	while (n_reps--) {
		func(arg);
	};
	return mean_time;
} /* int fntime(int n_reps, Timeable func, void * arg) */

