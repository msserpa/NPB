SHELL=/bin/bash
BENCHMARK=is
BENCHMARKU=IS

include ../config/make.def

include ../sys/make.common

OBJS = is.o ${COMMON}/c_print_results.o ${COMMON}/c_timers.o


${PROGRAM}: config ${OBJS}
	${CLINK} -mcmodel=large ${CLINKFLAGS} -o ${PROGRAM} ${OBJS} ${CMPI_LIB}

.c.o:
	${CCOMPILE} -mcmodel=large $<

is.o:             is.c  npbparams.h


clean:
	- rm -f *.o *~ mputil*
	- rm -f is npbparams.h core
