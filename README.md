# <center>![page](https://github.com/matiassingers/awesome-readme/blob/master/icon.png?raw=true)


# <center>A simple rebuild of *printf()*

## <center> Purpose

This project was assigned to us by Holberton School Tulsa. The mandatory goals/functionality/restrictions of this project for our *printf()* (i.e. *_printf()*) were as follows:
- Use the prototype: *int _printf(const char *format, ...);*
- Print all of format to std output and handle the conversion specifiers: "c", "s", "%", "d", and "i"
- Returns the number of characters printed
- written in vi, vim, or emacs
- compiled with the following `gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c`

## <center>How to Use (plus Examples)
The user of _printf() will be able to print their desired format string and have the use of format specifiers to reserve space for the value variable types character, string, decimal, and integer (%c, %s, %d, and %i respectively). 
The following shows an example of how these are implemented:

    char c = 'x';
    char *s = "hello";
    int i = 6;

    _printf("I have a char: %c, a string: %s, and an integer: %d.", c, s, int);

The output would looks as follows:

    I have a char: x, a string: hello, and an integer: 6.

## Contributors
This project exists because of the following contributors:<br />
<a href="https://github.com/bsbanotto"><img src="https://avatars.githubusercontent.com/u/88809937?v=4"></a> <a href="https://github.com/AaronManuel15"><img src="https://avatars.githubusercontent.com/u/100643249?v=4"></a>

> Written with [StackEdit](https://stackedit.io/).
