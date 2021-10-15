/** ./fntimer.h
 * Header for the function timer.
 * By      : Leomar Duran <https://github.com/lduran2/>
 * When    : 2021-10-14t22:35
 * For     : CIS 3207 Assignment 4
 * Version : 1.0
 * Canonical: <https://github.com/lduran2/c-function-timer/blob/master/function-timer.h>
 *
 * CHANGELOG:
 *     v1.0 - 2021-10-14t22:35
 *         attempt using single void pointer
 *
 *     v0.0 - 2021-10-14t16:50
 *         attempt using varargs
 */

/* guard against duplicate header */
#ifndef __FNTIMER_H__
	#define __FNTIMER_H__

	typedef void *Timeable (void *);

	/**
	 * Decorates the given function by repeating it for $n_reps
	 * repetitions with the given args and finding the average
	 * duration of the repetitions.
	 */
	double fntime(int n_reps, Timeable func, void * arg);
#endif /* #ifndef __FNTIMER_H__ */

