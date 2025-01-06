# Undefined Behavior in C: Array Out-of-Bounds Access

This repository demonstrates a common, yet dangerous, error in C programming: accessing memory outside the allocated bounds of an array.

The `bug.c` file contains code that attempts to write to memory beyond the end of an array. This leads to undefined behavior, meaning the program's outcome is unpredictable and could cause crashes, data corruption, or seemingly random results.  The behavior might vary across different compilers, operating systems, or even different executions on the same system.

The `bugSolution.c` file provides a corrected version of the code which prevents out-of-bounds access.