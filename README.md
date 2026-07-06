# C++ Programming & OS Fast-Track Preparation

This repository contains my source code, exercises, and custom notes built during my journey through the **C++ Tutorials in Hindi** course by CodeWithHarry [1]. 

To prepare for **Operating Systems (OS)** studies as rapidly as possible, I designed and completed a custom, streamlined learning path. This "OS Fast-Track" allowed me to bypass deep language-specific design structures to master the memory management, lifecycle, and low-level resource concepts critical for systems programming.

## 🚀 Course Overview & Fast-Track Syllabus
The complete course contains 74 detailed video tutorials [1]. My learning path successfully covered C++ foundations before fast-tracking straight to OS-related modules:

### Phase 1: C++ Foundations
*   **Basics & Structures:** Variables [2], Operators [2], Reference Variables [3], Loops [3], and Pointers [4].
*   **Data Layout:** Arrays [4], Structures, Unions & Enums [4].
*   **Functional Programming:** Call by Value/Reference [5], Inline Functions [5], Recursions [5], and Function Overloading [5].
*   **OOP Foundations:** Object-Oriented paradigms [6], Classes [6], Private vs. Public encapsulation [6], and Static Members/Methods [7].

### Phase 2: Operating Systems (OS) Accelerated Track
Skipping non-essential concepts, this phase prioritised concepts directly applicable to kernel design, processes, and memory architectures:
1.  **Resource Lifecycles (Constructors & Destructors)** [8, 9]: Simulating process startup allocations and automatic memory cleanup (preventing memory leaks) using automatic destructor triggers.
2.  **Dynamic Memory Management (`new` & `delete`)** [10, 11]: Allocating heap memory dynamically, utilising the Arrow Operator (`->`) for pointers [10], and understanding the danger of unmanaged RAM overflows.
3.  **File Systems (File I/O)** [12]: Interfacing with permanent storage via output (`ofstream`) and input (`ifstream`) streams to write error logs and read system states.
4.  **Standard Template Library (STL) Containers** [13, 14]: Comparing contiguous vectors (`std::vector`) [14] and node-linked lists (`std::list`) [14] to analyse algorithmic complexity when designing CPU scheduler queues.

---

## 📂 Repository Structure
Below are the key programs implemented during this course:
*   `01_UserAccount/`: Demonstrates secure data encapsulation using private helper methods to validate logins.
*   `02_StudentGrades/`: Illustrates dynamic arrays stored inside class boundaries to manage structured student data.
*   `03_GamePlayerTracker/`: Uses static data members and static methods to coordinate a global server player count.
*   `04_FileHandlerScope/`: Explores programmatic resource control using automatic constructor and destructor blocks.
*   `05_GameLevelHeap/`: Performs dynamic pointer allocation (`new`) and deallocation (`delete`) on the system heap.
*   `06_CrashReportLog/`: Implements file-writing capabilities using defensive checks (`is_open()`) to lock and unlock filesystem resources safely.

---

## 🛠️ Tech Stack & Environment
*   **Language:** C++ (C++11/C++17 Standards)
*   **Compiler:** GCC / g++ [15]
*   **Editor:** Visual Studio Code [15]

## 🎯 Next Steps
With this solid foundation in dynamic memory allocation, process-like lifecycles, and standard library data structures, I am now transitioning to **Operating Systems (OS) Core Studies** to learn about process scheduling, virtual memory, and kernel architectures!

---
*Credits to [CodeWithHarry](https://youtube.com/@CodeWithHarry) for the excellent "C++ Tutorials in Hindi" playlist [15].*
