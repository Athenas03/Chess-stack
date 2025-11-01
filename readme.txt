Athena Salman

My chess program 

ChessStack
https://gitchessstack.org/code/git

Project: Custom Stack-Based Language Implementation

Description:
My project implements a custom stack-based language in C++. It defines several classes (King, Queen, Pawn, Bishop) that encapsulate different data types (int, float, char, string) and utilize stack operations. Each class overloads arithmetic (+, -, *, /) and logical (&&, ||, !) operators to perform operations on stack-based values. The CPU operations are encapsulated in the Cpu<T> template class, supporting arithmetic operations and logical operations for various data types.


Elements Integrated:
1. Classes:
   - King: Handles integer values with stack operations.
   - Queen: Handles floating-point values with stack operations.
   - Pawn: Handles character values with stack operations.
   - Bishop: Handles string values with stack operations.


2. Operators:
   - Arithmetic Operators: Overloaded (+, -, *, /) for all data types.
   - Logical Operators: Overloaded (&&, ||, !) for all data types.


3. CPU Operations:
   - Cpu<T> Template Class: Implements arithmetic operations (add, subtract, multiply, divide) and logical operations (logical AND, logical OR, logical NOT).


4. Input/Output Handling:
   - operators.h: Defines custom input (checkMate) and output (yourMove) operators for streamlined interaction in main programs.


5. Main Program:
   - main.cpp: Demonstrates the usage of defined classes and operators. It performs arithmetic operations, stack manipulations, and custom input/output handling using the defined language constructs.


How Elements are Incorporated:
- Each class (King, Queen, Pawn, Bishop) encapsulates a stack and overloads operators to perform stack-based operations.
- CPU operations are handled by the Cpu<T> class, providing generic arithmetic and logical operations.
- Custom input and output operators from operators.h enhance interaction and usability in main.cpp.
- Main.cpp serves as a demonstration of the language's capabilities, showcasing arithmetic operations, stack manipulations, and interactive input/output using custom operators.


New Learnings:
- Enhanced understanding of operator overloading in C++, particularly for custom data types and operations.
- Practiced implementation of stack-based data structures and their integration with templated CPU operations.
- Learned techniques for improving code readability and usability through custom input/output operators.


Challenges Faced:
- Managing stack operations and ensuring proper handling of data types across different classes.
- Debugging issues related to operator precedence and ensuring correct usage of overloaded operators.
- Ensuring compatibility and proper integration of templated CPU operations with stack-based classes.


Future Improvements:
- Expand language capabilities with additional data types or operations.
- Implement error handling mechanisms for stack underflows or type mismatches.
- Enhance documentation and comments to improve code readability and maintainability.

---


