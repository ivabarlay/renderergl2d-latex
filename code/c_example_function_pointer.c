#include <stdio.h>
int foo()
{
    return 5;
}

int main()
{
    // Initialize pointer
    int (*fncPtr)();

    // Assign 'foo' function to pointer
    fncPtr = &foo;

    // Implicit call. Some compilers don't support this
    int a = fncPtr();

    // Explicit call
    int b = (*fncPtr)();

    return 0;
}