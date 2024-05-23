// Name: Serene Akhtar
// ASU ID: 1224434328

# CSE310 Project 1

## Project Overview

This project is a part of the CSE310 course and focuses on implementing a linked list in C++. The project involves various aspects of C++ programming such as memory management, file I/O, and modular design. The project is developed and tested on a Linux environment using the `g++` compiler.

## Files and Structure

The project consists of the following files:

- `structs.h`: Defines the data structures `NODE` and `LIST`.
- `util.h`: Contains utility function prototypes.
- `list_read.h`: Contains function prototypes for reading the list.
- `list_write.h`: Contains function prototypes for writing and modifying the list.
- `util.cpp`: Implements the utility functions.
- `list_read.cpp`: Implements the functions for reading the list.
- `list_write.cpp`: Implements the functions for writing and modifying the list (this is the file you need to complete).
- `main.cpp`: Contains the main function and handles command-line arguments.

## How to Compile and Run

### Compilation

To compile the project, use the provided `Makefile`. The `Makefile` simplifies the compilation process by defining rules for building the project.

1. Open a terminal and navigate to the project directory where the `Makefile` is located.

2. Run the following command:

    ```bash
    make
    ```

   This will compile all the necessary `.cpp` files and generate the executable named `PJ1`.

3. If you need to clean up the compiled files and start fresh, you can run:

    ```bash
    make clean
    ```

   This command will remove the executable and any object files (`*.o`) created during the compilation.

### Execution

To run the executable, use the following command format:

```bash
./PJ1 <InputFile> <OutputFile>
