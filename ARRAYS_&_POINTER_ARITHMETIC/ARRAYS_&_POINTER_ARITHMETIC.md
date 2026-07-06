The Concept & Notes (With Code Examples):
1. Arrays in C++: An array is a collection of items of the exact same data type stored in contiguous (side-by-side) memory locations. Instead of making 100 different variables for 100 students' scores, you can just make one array that holds 100 integers!
Important Rule: In C++, arrays are "zero-indexed". This means the very first item is at position 0, the second is at 1, and so on.

2. Pointers and Arrays: Here is a mind-blowing C++ secret: The name of an array is actually just a pointer to its very first element! You do not need to use the & operator to get the address of the start of an array.

3. Pointer Arithmetic: Because arrays are stored side-by-side in memory, you can do math with pointers to jump from one array item to the next. If p points to marks, then p + 1 points to marks.