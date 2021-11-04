E=@echo
Q=@

CC=gcc
LIBS=-lm

SRC=$(wildcard *.c)
PROG=$(patsubst %.c,%,$(SRC))

all: $(PROG)

%: %.c
	$(E) "  cc " $@
	$(Q) $(CC) -o $@ $< $(LIBS)

clean:
	$(E) "  clean"
	$(Q) rm $(PROG)
