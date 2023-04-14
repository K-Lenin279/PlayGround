#include <stdio.h>

void(fun)(int n)
{
    printf("Value of n is %d\n", n);
}

int main(void)
{
    void (*fun_ptr)(int n) = &fun;
    /**
     * The above line is equivalent of the following:
     * void (*fun_ptr)(int);
     * fun_ptr = &fun;
     */
    /**
     * Alternatively;
     * void (*fun_ptr)(int n) = fun;
     * also compiles.
     */

    (*fun_ptr)(10);
    // Invoking fun() using fun_ptr
    /**
     * You can rewrite the above code line as:
     * fun_ptr(10);
     */
    return (0);
}