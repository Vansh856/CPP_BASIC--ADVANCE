The Concept & Notes (With Code Examples):
We learned that functions are great, but every time you call a function, the computer does extra work: it pauses main(), copies variables to a new memory location, runs the code, and then jumps back. This is called "overhead." The concepts below help optimize functions and make them more flexible!
1. Inline Functions (inline) If you have a very small function (like 1 or 2 lines of code) that you call hundreds of times, the "overhead" of jumping back and forth slows down your program. If you place the inline keyword before the function, you are asking the compiler to literally copy and paste the function's code directly into main() wherever it is called!
Rule of thumb: Only use inline for tiny, simple functions. Do not use it for complex loops or large functions.

2. Default Arguments Sometimes, a function needs a value, but you want to provide a fallback or "default" value just in case the programmer forgets to pass one. You assign default values directly in the function definition.
Crucial Rule: Default arguments must always be written on the far-right side of your parameters!

3. Constant Arguments (const) When you pass variables by reference (using pointers or &), you risk accidentally changing the original variable inside the function. If you want the speed and memory benefits of references but want to guarantee the data cannot be modified, you make the argument a constant using const.