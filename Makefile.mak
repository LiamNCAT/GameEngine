IDIR =../include
CC=gcc
GLIB=../lib/glfw-3.3.2/include
DEPS = events.h display.h audio.h load.h math.h render.h
CFLAGS=-I$(IDIR) -I$(GLIB) 

%.o: %.c  $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

compile: %.c  $(DEPS)
	$(CC) -o $@ $< $(CFLAGS)