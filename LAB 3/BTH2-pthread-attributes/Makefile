CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -pthread
SOURCES = attr_init.c attr_destroy.c attr_getschedparam.c attr_getschedpolicy.c attr_getdetachstate.c attr_getinheritsched.c attr_getscope.c attr_setdetachstate.c attr_setguardsize.c attr_setstackaddr.c attr_setstacksize.c attr_getguardsize.c attr_getstackaddr.c attr_getstacksize.c
TARGETS = $(SOURCES:.c=)

all: $(TARGETS)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(TARGETS)
