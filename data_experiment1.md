# BASICS
## EXPERIMENT 1
## AIM: -
To study and implement C++ Program Structure (Data Types)

## Theory: -

In C++, variables are declared using data type to restrict storage type. The compiler allocates memory based on the data type, which requires different memory allocations. C++ supports various data types, including Character (char), Integer (int), Boolean (bool), Floating point (float), Double Floating point (double), Void (), and Wide Character sizeof() operator. These data types can have modifiers, such as Short Long Signed Unsigned, which can increase or decrease the variable's size. For example, Long can extend an integer to 4 bytes. The storage representation and machine instructions for each data type differ from machine to machine. 

Variables in C language can be stored in different storage classes, such as Auto, extern, static, and register. Auto variables are the default storage class for variables declared within a function or block, and can only be accessed within the block. Extern variables are global variables initialized with a legal value and can be overwritten or changed in different blocks.

Static variables are used to declare static variables, which preserve their value even after they are out of their scope. They are initialized once and exist until the program's termination, without new memory being allocated. Global static variables can be accessed anywhere in the program and are assigned 0 by the compiler.

Register variables are declared with the same functionality as auto variables, but the compiler attempts to store them in the microprocessor's registers if a free register is available. This makes them faster to access than variables stored in memory during program runtime. Register variables are typically declared with the register keyword to improve program runtime efficiency.

Data types can have modifiers, such as Short Long Signed Unsigned, which can make variables either increase or decrease in size. For example, Long can extend an integer to be 4 bytes.


### DATA TYPES: - THEIR SIZES AND RANGE 
### Data Type	Size (in bytes)	Range
#### short int
(2 bytes )	(-32,768 to 32,767)
#### unsigned short int 
(2 bytes) 	(0 to 65,535)
#### unsigned int
(4 bytes) 	(0 to 4,294,967,295)
#### int
(4 bytes)	(-2,147,483,648 to 2,147,483,647)
#### long int (4 bytes)
(-2,147,483,648 to 2,147,483,647)
#### unsigned long int
(4 bytes)  (0 to 4,294,967,295)
#### long long int
(8 bytes) {-(2^63) to (2^63)-1}
#### unsigned long long int
(8 bytes)	(0 to 18,446,744,073,709,551,615)
#### signed char
(1 byte)	(-128 to 127)
#### unsigned char
(1 byte) 	(0 to 255)
#### float
(4 bytes)	(-3.4×10^38 to 3.4×10^38)
#### double
(8 bytes) (-1.7×10^308 to1.7×10^308)
#### long double
(12 bytes)	(-1.1×10^4932 to1.1×10^4932)
#### wchar_t (2 or 4 bytes)	(1 to wide character)

### OUTPUT OF THE CODE
![Output of the bitwise operator code](https://github.com/SumitPandey-cloud/operators/blob/main/output-of-program.jpg)
