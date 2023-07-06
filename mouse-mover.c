#include <X11/Xlib.h>
#include <X11/extensions/XTest.h>
#include <unistd.h>
#include <stdio.h>

int main()
{
    Display *display;
    Window root_window;

    display = XOpenDisplay(NULL);
    if (display == NULL)
    {
        fprintf(stderr, "Error opening the display\n");
        return 1;
    }

    root_window = XRootWindow(display, DefaultScreen(display));

    while (1)
    {
        XTestFakeMotionEvent(display,0, -1, -1, 0);
        XFlush(display);
        sleep(10); 
    }

    XCloseDisplay(display);
    return 0;
}
