COMPILE      = gcc -g -Wall -Werror
COMPILE_OUT  = $(COMPILE) $^ -o$@
COMPILE_O    = $(COMPILE) -c $<
ALLOUTPUTS   = *.o *.gch *.out
ALLTESTS     = tb_*.o tb_*.gch tb_*.out

# shortcut
all: demo.out
	#noop

# output
demo.out: demo.o fntimer.o
	$(COMPILE_OUT)

# objects
demo.o: demo.c
	$(COMPILE_O)

fntimer.o: fntimer.c
	$(COMPILE_O)

# cleaning
clean-build: clean all

clean:
	-rm -f $(ALLOUTPUTS)

