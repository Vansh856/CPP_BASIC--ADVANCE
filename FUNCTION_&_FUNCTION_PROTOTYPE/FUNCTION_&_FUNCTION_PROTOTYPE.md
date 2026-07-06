The Concept & Notes (With Code Examples):
1. Functions in C++ A function is simply a dedicated block of code that performs a specific task
. You define it once, and then you can "call" it as many times as you want. This makes your code reusable, readable, and much easier to debug. A function usually has a return type (like int if it gives back a number, or void if it gives back nothing), a name, and parameters (the inputs it needs).

2. Function Prototypes C++ reads your code from top to bottom. If you try to call a function inside main() but you don't actually define that function until below main(), the compiler will panic and throw an error because it doesn't know the function exists yet! A Function Prototype is a way to give the compiler a "heads-up"
. You declare the function's name and inputs at the very top of your file, promising the compiler that you will provide the actual code for it later.