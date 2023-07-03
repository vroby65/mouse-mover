# mouse_mover

The mouse_mover program is a command-line tool for Linux that prevents the screen saver from activating by continuously moving the mouse cursor at fixed intervals. It utilizes the Xlib and XTest libraries to interact with the X server and simulate mouse motion events.

Features
Prevents the screen saver from activating by simulating mouse movement.
Works on Linux systems with an X server.
Runs as a background process, continuously moving the mouse cursor.
Configurable interval for mouse movement.
Installation
Ensure that you have the necessary development libraries installed for Xlib and XTest.

Clone the repository to your local machine:

git clone <https://github.com/vroby65/mouse_mover.git>
Compile the mouse_mover program using the provided Makefile:

cd mouse_mover
make
Usage
To start the mouse_mover program, execute the following command in your terminal:

./mouse_mover
The program will start moving the mouse cursor every 10 seconds by default. You can modify the interval by editing the source code and recompiling the program.

To stop the program, press Ctrl+C in the terminal where it is running.

License
This program is distributed under the apache2 License.



