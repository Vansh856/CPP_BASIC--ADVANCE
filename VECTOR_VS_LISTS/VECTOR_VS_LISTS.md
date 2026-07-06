1. std::vector (The Dynamic Array)
A vector is an array that grows and shrinks automatically as you add or remove elements
.
OS Analogy: A process table where you need to quickly look up a process by its Index/ID.
Under the Hood: All elements are stored in contiguous (sequential) memory. This makes looking up any element lightning-fast. However, inserting or deleting an element in the middle is slow because C++ has to shift all the other elements in memory.
2. std::list (The Doubly-Linked List)
A list is a sequence of elements where each element points to the next and previous ones in memory
.
OS Analogy: A Scheduler's "Ready Queue" or "Blocked Queue" where processes are constantly entering, exiting, or being moved around.
Under the Hood: Elements are scattered non-contiguously across RAM. This makes looking up an element by index slow (C++ has to start at the beginning and follow the pointers). However, inserting or deleting elements anywhere in the list is incredibly fast because C++ only has to change a couple of pointers.