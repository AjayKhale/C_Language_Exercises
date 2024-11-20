
# Test-2

In this example the double quote " after \n is mistyped as a single quote.\
The compiler will recognize this as an error and complain that a double quote is missing

## Error Message
```bash
main.c: In function 'main':
main.c:5:10: warning: missing terminating " character
   printf("Hello, world!\n');
          ^
main.c:5:10: error: missing terminating " character
   printf("Hello, world!\n');
          ^~~~~~~~~~~~~~~~~~~
main.c:6:1: error: expected expression before '}' token
 }
 ^
main.c:6:1: error: expected ';' before '}' token
```
