Libft

Libft is a custom C library developed as part of the 42Cursus curriculum. This project aims to recreate standard C library functions, providing a solid foundation for future projects in the 42 ecosystem.

Features

- Recreation of Standard Functions: Includes commonly used functions from the C standard library, enhancing your understanding of memory management and string manipulation.
- Modularity: Organized code for easy integration into other projects.
- Testing: Comprehensive test suite to ensure the reliability of the implemented functions.

Installation

Clone the repository and compile the library:

```bash
git clone https://github.com/schennal/libft.git
cd libft
make
```

Usage

Include the library in your projects by linking it during compilation:

```bash
gcc -o my_project my_project.c -L. -libft.a
```
