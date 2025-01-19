![Libft](https://github.com/user-attachments/assets/cd0e8af8-cb20-426f-9cf2-bbc38c180089)

# Libft

Libft is a custom implementation of the standard C library functions, created as a project for the 42 school. The goal of this project is to recreate various standard library functions and gain a deeper understanding of their inner workings. This library is also evolutive, meaning it can be expanded with additional functions as needed.

## Usage

To use the Libft library, follow these steps:

1. Clone the repository:
   ```sh
   git clone https://github.com/LolelsayFR/42.libft.git
   cd 42.libft
   ```

2. Initialize and update the submodules:
   ```sh
   git submodule update --init --recursive
   ```

3. Compile the library:
   ```sh
   make
   ```

4. Include the library in your project:
   ```c
   #include "libft.h"
   ```

5. Link the library when compiling your project:
   ```sh
   gcc -o my_program my_program.c libft.a
   ```

## Dependencies

Libft has the following dependencies:

- [ft_printf](https://github.com/LolelsayFR/42.ft_printf)
- [get_next_line](https://github.com/LolelsayFR/42.get_next_line)

Make sure to initialize and update the submodules as mentioned in the usage instructions.

## Project Context

Libft is a project from the 42 school curriculum. The 42 school is a private, nonprofit and tuition-free computer programming school created and funded by French billionaire Xavier Niel. The school aims to provide a high-quality education in software engineering and computer programming.

The Libft project is an essential part of the 42 curriculum, as it helps students understand the inner workings of standard library functions and develop their own implementations. The project is also evolutive, meaning that students can continue to expand and improve their library as they progress through their studies.
