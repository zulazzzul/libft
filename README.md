*This project has been created as part of the 42 curriculum by nd-abreu.*

# Libft — Your Very First Own Library

## Description

Libft is the first project of the 42 curriculum. The goal is to build a personal C library by reimplementing a set of standard functions from the C standard library (`libc`), along with additional utility functions not found in it. The result is a static library — `libft.a` — that can be reused in future 42 projects.

The project is split into three parts:

- **Part 1 – Libc functions:** Reimplementations of standard functions such as `ft_strlen`, `ft_memcpy`, `ft_atoi`, `ft_strchr`, and others, all prefixed with `ft_`.
- **Part 2 – Additional functions:** Custom utility functions not present in the standard library, including `ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa`, `ft_strmapi`, and file descriptor output functions (`ft_putchar_fd`, `ft_putstr_fd`, etc.).
- **Part 3 – Linked list (bonus):** Functions to create and manipulate singly linked lists using a `t_list` structure, including `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstclear`, `ft_lstmap`, and more.

## Instructions

**Compile the library:**
```bash
make
```

**Compile with bonus (linked list functions):**
```bash
make bonus
```

**Clean object files:**
```bash
make clean
```

**Remove all generated files (including the library):**
```bash
make fclean
```

**Rebuild from scratch:**
```bash
make re
```

To use the library in your own project, include the header and link against the archive:
```c
#include "libft.h"
```
```bash
cc your_file.c -L. -lft
```

## Library Reference

### Part 1 — Libc Functions

| Function | Description |
|---|---|
| `ft_isalpha` | Checks if a character is alphabetic |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is alphanumeric |
| `ft_isascii` | Checks if a character is in the ASCII table |
| `ft_isprint` | Checks if a character is printable |
| `ft_strlen` | Returns the length of a string |
| `ft_memset` | Fills memory with a constant byte |
| `ft_bzero` | Zeroes out a block of memory |
| `ft_memcpy` | Copies memory from source to destination |
| `ft_memmove` | Copies memory, handling overlapping regions |
| `ft_strlcpy` | Copies a string with size-bounded truncation |
| `ft_strlcat` | Appends a string with size-bounded truncation |
| `ft_toupper` | Converts a character to uppercase |
| `ft_tolower` | Converts a character to lowercase |
| `ft_strchr` | Finds the first occurrence of a character in a string |
| `ft_strrchr` | Finds the last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings up to n characters |
| `ft_memchr` | Searches for a byte in memory |
| `ft_memcmp` | Compares two blocks of memory |
| `ft_strnstr` | Finds a substring within a bounded length string |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates and zero-initializes memory |
| `ft_strdup` | Returns a duplicate of a string |

### Part 2 — Additional Functions

| Function | Description |
|---|---|
| `ft_substr` | Extracts a substring from a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims characters from both ends of a string |
| `ft_split` | Splits a string by a delimiter into an array |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character, returning a new string |
| `ft_striteri` | Applies a function to each character in place |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

### Part 3 — Linked List (Bonus)

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node |
| `ft_lstadd_front` | Adds a node at the beginning of the list |
| `ft_lstadd_back` | Adds a node at the end of the list |
| `ft_lstsize` | Returns the number of nodes in a list |
| `ft_lstlast` | Returns the last node of a list |
| `ft_lstdelone` | Frees a single node's content and the node itself |
| `ft_lstclear` | Frees all nodes of a list |
| `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap` | Creates a new list by applying a function to each node |

## Resources

**Documentation & References:**
- [Linux man pages](https://man7.org/linux/man-pages/) — primary reference for all reimplemented functions
- [cppreference.com](https://en.cppreference.com/w/c) — additional C standard library documentation
- [Stack Overflow](https://stackoverflow.com) — used to clarify edge cases and understand specific function behaviors

**AI Usage:**

AI was used occasionally as a learning aid when stuck on the logic of certain functions. The approach was to ask for hints or explanations of concepts (e.g., how pointer arithmetic works in a specific context, or why a function might behave differently on edge cases) rather than asking for direct solutions. All code was written and reasoned through independently.
