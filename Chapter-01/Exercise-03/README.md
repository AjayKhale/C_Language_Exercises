# Exercise-03
Modify the temperature conversion program to print a heading above the table.

| Format Specifier | Description |
| :-------- | :------- |
| %d | print as decimal integer |
| %6d | print as decimal integer, at least 6 characters wide |
| %f | print as floating point |
| %6f | print as floating point, at least 6 characters wide |
| %.2f | print as floating point, 2 characters after decimal point |
| %6.2f | print as floating point, at least 6 wide and 2 after decimal point |

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
```bash
fahr celsius
  0  -17.8
 20   -6.7
 40    4.4
 60   15.6
 80   26.7
100   37.8
120   48.9
140   60.0
160   71.1
180   82.2
200   93.3
220  104.4
240  115.6
260  126.7
280  137.8
300  148.9
```