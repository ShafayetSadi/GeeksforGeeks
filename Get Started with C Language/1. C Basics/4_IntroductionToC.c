/*
C Introduction:
- Low level Programming
- Speed of Execution
- Requires less resources
- Used in Embedded Systems and System Softwares
- Typically tought as first programming language to Engineers
- Mother of most of the other programming language like C++,Java,JaveScript

C vs C++:

Similarites:
- Low level Programming
- Speed of Execution
- Requires less resources
- Used in Embedded Systems and System Softwares

Differences:
- C++ is kind of superset of C
- C++ has additonal features
- C is still used because of simple syntex, easier and lighter


Application:
- Kernels of almost all operating systems are written in C
	- Windows
	- Linux
	- Mac OS
- DBMSs like MySQL, Oracle are said to be written in C
- The most used Python implementation CPython is done in C

C Standards and Implementations:
- K & R C (Book published in 1978)
- ANSI C or C89
- C99
- C11
- C17
- C2x

Compilers: GCC C,  Microsoft Visual C++, Oracle C compiler etc

Basic Terminology:
- Keywords and variables
- Functions
- Statically Typed(C, C++, Java) and Dinamically Typed(Python)
- Preprocessor and Header Files
	- Anything that begins with # is processed by Preprocessor
	- Preprocessors do the following tasks mainly
		- Header files
		- Conditional Compilation
		- Macro Expansion

How do C programs run?
<------------------------------Compiler------------------------------>
CsourceCode -(preprocessor)-> Preprocessed C code -(mainCompilation)-> ObjectCode -(Linker-> ExecutableCode <-- Libraries

*/

#include <stdio.h>

int main()
{
	printf("Hello World!\n"); // This is a comment
	return 0;
}
