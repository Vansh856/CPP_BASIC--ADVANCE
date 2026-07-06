The Concept & Notes (With Code Examples):
1. Structures (struct) A structure allows you to combine different types of data under one single name. Think of it as creating your very own custom data type!

2. Unions (union) Unions are written exactly like structures, but they have a massive difference in how they use memory. In a struct, every single variable gets its own memory space. In a union, all variables share the exact same memory address. You use a union when you only plan to use one of the variables at a time, which perfectly optimizes memory!

3. Enums (enum) "Enum" is short for enumeration. It is a way to make your code far more readable by assigning actual words to standard integer numbers. Behind the scenes, the compiler just sees 0, 1, 2, etc.