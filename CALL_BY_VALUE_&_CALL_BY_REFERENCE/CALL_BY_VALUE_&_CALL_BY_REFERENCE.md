The Concept & Notes (With Code Examples):
Whenever you pass a variable into a function, C++ needs to know exactly how you want to hand that data over. You have two main choices:
1. Call by Value (Passing a Copy) When you pass a variable normally, C++ creates a brand new, temporary copy of that variable's value and gives it to the function. If the function changes that value, it is only changing the copy. The original variable in main() remains completely untouched and safe.

2. Call by Reference (Passing the Actual Variable) If you actually want a function to modify the original variables, you cannot pass a copy. You must pass the physical memory address (using Pointers) or an alias (using Reference Variables). We call this "Call by Reference".