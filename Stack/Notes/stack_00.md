first of all the all game is all about RAM (random access memory) 
RAM is all about giving random access of memory 



and OS brings the concept of stack and heap 


then i arised a question like stack is faster than heap if RAM is same then?

 stack is faster because allocation/deallocation is just pointer arithmetic and memory is contiguous, while heap requires searching, bookkeeping, and may suffer cache misses.




A stack is a LIFO (Last In, First Out) data structure


---



## Call Stacks and Stack Frames

- **Call Stack:** A memory area that keeps track of active function calls.
- **Stack Frame (Activation Record):** Stores all information for a function call, including:
  - Return address (where to continue after the function ends)
  - Local variables
  - Function parameters

---



## Some GDB Commands to Debug and Watch Stack which is used to watch stack 

- **`backtrace`**  
  Shows the call stack, including return addresses and calling functions.
  
- **`info locals`**  
  Displays all local variables in the current stack frame.
  
- **`info args`**  
  Displays the function parameters of the current frame.
