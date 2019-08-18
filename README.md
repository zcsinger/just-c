# Just C

This directory will not use any libraries in C. It is interested in writing simple, interesting programs without any assistance.

In particular, each of the C programs in this project do not have a single ";" or "#" keystroke!

Below are a collection of challenges, each of which has its solution in [number].c.

## Challenge 1

Write a program that outputs "hello" without using any includes or semicolons.

## Challenge 2

Write a program that prints the numbers from 1 to n without using any semicolons, with an integer command line argument.

## Challenge 3

Write a program that takes in an integer and outputs whether the integer is prime to the standard output.

## Challenge 4

Write a program that takes in an integer n and outputs the nth Fibonacci number to the standard output.

## Challenge 5

Write a program that sorts a string provided through the command line, and outputs the sorted string to the standard output.

## Notes / Hints

The main insight is that one can still put statements in if and while statements, without using a semicolon.

### Functions

Helper functions are, as always, useful. However, since there is no way to return an explicit value from a function without a semicolon, one must rely on the implicit value returned. 

Similar to how the main() function will implicitly return an int, helper functions can do the same. Although the behavior is undefined, the output is never used. This will allow for a function to be called in an if statement. 
For example, if a function

```f() {
...
}
```
is defined, then the function can be used elsewhere as:

```if(f()) {}```

