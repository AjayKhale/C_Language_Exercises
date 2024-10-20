# Exercise-2
Experiment to find out what happens when printf's argument string contains
\c, where c is some character not listed below.

| Parameter | Type     |
| :-------- | :------- |
| \a | alert (bell) character |
| \\ | backslash |
| \b | backspace |
| \? | question mark |
| \f | formfeed |
| \n | newline |
| \' | single quote |
| \" | double quote |
| \r | carriage return |
| \t | horizontal tab |
| \v |vertical tab |
| \ooo | octal number |
| \xhh | hexadecimal number|


## Compiling Code

To compile code, run the following command

```bash
  gcc main.c -o main >log.out 2>log_error.out
```

## Running Tests

To run tests, run the following command

```bash
  ./main.exe >log.out 2>log_error.out
```

## Output
In this exercise output is undefined and might show aome warning as follows
```bash
main.c: In function 'main':
main.c:5:10: warning: unknown escape sequence: '\y'
   printf("Hello, world!\y");
          ^~~~~~~~~~~~~~~~~
```