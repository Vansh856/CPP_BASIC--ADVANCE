The Concept & Notes (With Code Examples):
An Operating System is useless if it forgets everything the moment you turn off the computer. While RAM (which we managed with new and delete) is wiped clean when power is lost, Hard Drives store data permanently. The OS manages this using a File System.
In C++, to read from or write to the hard drive, you have to include a new library called <fstream> (File Stream) at the top of your program.
There are two main classes you will use:
ofstream (Output File Stream): Used to write data out of your program and onto the hard drive.
ifstream (Input File Stream): Used to read data from the hard drive into your program's RAM.
Crucial OS Rule: Whenever you open a file, the OS locks it so other programs can't mess with it. When you are done, you must use the .close() function to unlock it and free the resource!