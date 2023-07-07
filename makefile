CC = gcc
CFLAGS = -Wall -Wextra

mouse_mover: mouse-mover.c
	$(CC) $(CFLAGS) -o mouse_mover mouse-mover.c -lX11 -lXtst

install: mouse_mover
	install -m 755 mouse_mover /usr/local/bin

uninstall:
	rm -f /usr/local/bin/mouse_mover

clean:
	rm -f mouse_mover
