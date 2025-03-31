<h1 align="center">_printf</h1>

This repository contains all the necessary functions for _printf() to work correctly. _printf() is a custom function based on the printf() function from the <stdio.h> library.

<h2 align="center">Description</h2>

_printf() is a variadic function that takes an argument called "format" which is a string and also a variable list of arguments.
This string can display formatted variables and special control characters, such as new lines ('\n'), backspaces ('\b') and tab spaces ('\t').
Conversion control characters describe the format of how the message string uses the other arguments. If _printf() contains more than one argument, then the format of the output is defined using a percent (%) character followed by a format description character.

<h2 align="center">Return value</h2>

The successful execution of _printf returns the total number of characters printed, excluding the null character.
If the function encounters an error, it returns -1.

<h2 align="center">Files</h2>

**_printf.c** - contains the main structure of the _printf() function

**utils.c** - contains auxiliary functions used by _printf()
>_putchar - prints a character<br>
>print_char - handles character printing<br>
>print_string - handles string printing<br>
>print_integer - handles integer printing<br>

**main.h** - header file containing all function prototypes and standard libraries used

**man_3_printf** - manual page for the correct use of _printf()

<h2 align="center">Format specifiers</h2>
  
The character that specifies the format is `'%'` and is used followed by one of the following specific characters:
Format | Description
------------- | -------------
%c | prints a character
%s | prints a string of characters
%d | prints an integer in base 10
%i | same as %d
%% | prints a percentage sign

<h2 align="center">How to use it</h2>

Compile all the ".c" files (*.c) including the main.c file you are using.

In this case, the compiler used was `gcc` with the following flags: `-Wall` `-Werror` `-Wextra` `-pedantic` `-Wno-format` `-std=gnu89`

Proceed by running this command:

`gcc -Wall -Werror -Wextra -pedantic -Wno-format -std=gnu89 *.c`

And then execute with:

`./a.out`

<h2 align="center">Examples</h2>

This is an example of how to use the `_printf()` function in a main.c file:

```c
#include "main.h"

int main(void)
{
    char string_ex[] = "Example string";
    int integer_ex = 12345;
    char char_ex = 'X';
    
    _printf("This is a string: %s\n", string_ex);
    _printf("This is an integer: %d\n", integer_ex);
    _printf("This is a character: %c\n", char_ex);
    _printf("This is a special case: %% \n");
    
    return (0);
}
```

Output:

```
This is a string: Example string
This is an integer: 12345
This is a character: X
This is a special case: % 
```

Contributor:

Bruno Salle
