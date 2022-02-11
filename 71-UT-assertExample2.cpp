// assertExample1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <assert.h>

/* assert example */
#include <stdio.h>      /* printf */
#include <assert.h>     /* assert */

void print_number(int* myInt) {
    assert(myInt != NULL);
    printf(" Value = %d\n", *myInt);
}

int main()
{
    int a = 10;
    int* b = NULL;
    int* c = NULL;

    b = &a;

    print_number(b);
    print_number(c); // calling with null

    return 0;
}
