The Concept & Notes (With Complete Code Examples):
When an Operating System runs, it cannot know in advance exactly how much memory (RAM) every single program will need. Browsers open new tabs, games load new levels, and variables need to be created on the fly. This on-the-fly allocation is called Dynamic Memory Allocation, and it happens in a special area of RAM called the Heap.
1. The new Keyword
 Instead of creating a standard variable, you can use the new keyword to ask the OS for a block of memory while the program is currently running. It creates the object and returns a Pointer to its location in memory.
2. The Arrow Operator (->)
 When you create a normal object, you use the dot operator (e.g., obj.run()). But if you dynamically create an object and store it in a pointer, you must use the Arrow Operator to access its functions!
3. The delete Keyword
 If you ask the OS for memory using new, you must give it back when you are done. The delete keyword frees that specific block of RAM so other programs can use it.