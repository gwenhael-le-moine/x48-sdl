# Makefile to build x48-sdl

srcdir  = .

CC = gcc
CFLAGS = -O3 \
	# -Wno-error=unused-variable \
	# -Wno-error=unused-but-set-variable \
	# -Wno-error=misleading-indentation \
	# -Wno-error=maybe-uninitialized
	# -Wall -Werror\

LIBS	= -lSDL -lm

SRC=mainsdl.c \
actions.c \
debugger.c \
device.c \
disasm.c \
emulate.c \
errors.c \
init.c \
lcd.c \
memory.c \
register.c \
resources.c \
romio.c \
rpl.c \
serial.c \
timer.c \
x48_sdl.c \
SDL_gfxPrimitives.c \
SDL_rotozoom.c

OBJS = $(SRC:.c=.o)

all: x48 mkcard checkrom dump2rom

x48: $(OBJS)
	$(CC) $(CFLAGS) $(LIBS) $(OBJS) -o x48

mkcard: mkcard.c
	$(CC) $(CFLAGS) $(LIBS) $? -o $@

checkrom: checkrom.c romio.o
	$(CC) $(CFLAGS) $(LIBS) $? -o $@

dump2rom: dump2rom.c
	$(CC) $(CFLAGS) $(LIBS) $? -o $@

clean:
	rm -f *.d
	rm -f *.o
	rm -f x48 mkcard checkrom dump2rom

%.d: %.c
	set -e; $(CC) -MM $(CFLAGS) $< | sed 's,\(.*\)\.o[ :]*,\1.o \1.d : ,g' > $@; [ -s $@ ] || rm -f $@

DEPENDENCIES = $(SRC:.c=.d)
include $(DEPENDENCIES)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

################################################################################################
################################################################################################
# Quick help
# $<	name of the first prerequisite
# $?	name of all prerequisites newer than target
# $@	file name of target
################################################################################################
################################################################################################
