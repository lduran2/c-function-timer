/** ./fntimer.c
 * Times a given function.
 * By      : Leomar Duran <https://github.com/lduran2/>
 * When    : 2021-10-15t03:48
 * For     : CIS 3207 Assignment 4
 * Version : 1.1
 * Canonical: <https://github.com/lduran2/c-function-timer/blob/master/fntimer.c>
 *
 * CHANGELOG:
 *     v1.1 - 2021-10-15t03:48
 *         implemented calculating the time elapsed
 *
 *     v1.0 - 2021-10-14t22:35
 *         attempt using single void pointer
 *
 *     v0.0 - 2021-10-14t16:50
 *         attempt using varargs
 */

#include "fntimer.h"	/* the header */
#include <stdlib.h>	/* for NULL */
#include <sys/time.h>	/* for struct timeval */

double fntime(int n_reps, Timeable func, void * arg) {
	struct timeval start_timeval;	/* time that loop started */
	struct timeval last_timeval;	/* current time */
	double time_delta = 0.0;

	/* for each number in the test */
	while (n_reps--) {
		/* get the starting time */
		gettimeofday(&start_timeval, NULL);
		/* perform the task */
		func(arg);
		/* get the ending time */
		gettimeofday(&last_timeval, NULL);
		/* update the time delta */
		time_delta += (double)(last_timeval.tv_sec - start_timeval.tv_sec)
			+ ((double)(last_timeval.tv_usec - start_timeval.tv_usec)/1E+06);
	}; /* while (n_reps--) */

	return time_delta/n_reps;
} /* double fntime(int n_reps, Timeable func, void * arg) */

