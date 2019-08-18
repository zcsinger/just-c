# Just C

This silly project is interested in writing simple, interesting programs in C with a number of unnecessary restrictions.

In particular, each of the C programs in this project do not have a single ";" or "#" keystroke! This means no libraries through include statements, macros, or return statements! 

Despite this, it still is possible to write meaningful programs! 

Below are a collection of challenges, each of which has its solution in [number].c. I challenge you to try them yourself! There is a hints section on the bottom.

## Challenge 1

Write a program that prints "Hello, World!" to standard output without using any or semicolon or hashtag keystrokes.

## Challenge 2

Write a program that inputs an integer from the command line and prints the numbers from 1 to n to standard output without using any semicolon or hashtag keystrokes, with an integer command line argument.

## Challenge 3

Write a program that takes in an integer and outputs whether the integer is prime to the standard output.

## Challenge 4

Write a program that takes in an integer n and outputs the nth Fibonacci number to the standard output.

## Challenge 5

Write a program that sorts a string provided through the command line, and outputs the sorted string to the standard output.

## Notes / Hints

### Implications

At first glance, it seems like nothing is possible.

- You cannot return a value through `return ... ;`
- You cannot perform a for loop with `for(... ; ... ; ...) { ... }`
- You cannot define variables or allocate memory.
- You cannot explicitly alter variables with `x = ... ;`

### First Step

The main insight is that one can still put statements in if, while, and switch statements, without using a semicolon. This is done with an empty body, and filling in the normal statement in the boolean check.

### Functions

Helper functions are, as always, useful. However, since there is no way to return an explicit value from a function without a semicolon, one must rely on the implicit value returned. 

Similar to how the main() function will implicitly return an int, helper functions can do the same. Although the behavior is undefined, the output is never used. This will allow for a function to be called in an if statement. 
For example, if a function

```
int f() {
...
// No return statement.
}
```
is defined, then the function can be used elsewhere as:

```if(f()) {}```

