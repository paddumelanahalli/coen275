#include<stdio.h>
void print_me_first()
{
    printf(" Printing this procedure first\n");
}
void print_me_second()
{
    printf(" Printing this procedure second\n");
}
void main()
{
    printf("entering the main routine\n");
    print_me_first();
    print_me_second();
    printf("leaving the in routine\n");
    printf("bye\n");
}
