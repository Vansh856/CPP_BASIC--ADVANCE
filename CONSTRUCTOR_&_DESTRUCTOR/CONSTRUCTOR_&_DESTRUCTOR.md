The Concept & Notes (With Code Examples):
When an Operating System launches a new program, it has to allocate memory, assign a Process ID (PID), and open necessary files. When the program closes, the OS must clean up those resources, or else the computer will suffer a "memory leak" and eventually crash.
In C++ Object-Oriented Programming, we handle this automatic setup and cleanup using Constructors and Destructors.
1. Constructors (The Setup) A constructor is a special "setup" function that is automatically called the exact moment an object is created. You don't even have to invoke it manually!
Rule 1: It must have the exact same name as the class.
Rule 2: It has no return type at all (not even void).
2. Destructors (The Cleanup) A destructor is a special "cleanup" function that is automatically called the exact moment an object is destroyed (usually when the function it was created in finishes running and the object goes out of scope).
Rule 1: It has the exact same name as the class, but is preceded by a tilde symbol (~).
Rule 2: It takes no arguments and returns nothing.