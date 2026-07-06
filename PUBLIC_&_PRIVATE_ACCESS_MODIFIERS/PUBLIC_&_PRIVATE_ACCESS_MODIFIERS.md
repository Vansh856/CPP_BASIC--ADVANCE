The Concept & Notes (With Code Examples):
In our last lesson, we learned that Encapsulation is the practice of hiding sensitive data inside an object. C++ achieves this using Access Modifiers. Think of these as security guards for your class variables and functions.
There are three main modifiers (though we will focus on the first two today):
private: Variables and functions marked as private can only be accessed or changed by functions inside the exact same class. If main() tries to touch them directly, the compiler will throw an error!
public: Variables and functions marked as public can be accessed from anywhere in your program, including main().
protected: (We will learn this later when we get to Inheritance).