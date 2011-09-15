/*
 * Created by: Erik Jansson (901202-4114)
 */
#include<stdio.h>
#include<stdlib.h>

#define SIZE 100 // Stack larger than 100 is probably unnecessary.

int stack[SIZE], st_index = 0;

void push(int val)
{
        if (st_index + 1 == SIZE)
                fprintf(stderr, "[!] Stack overflow. Exiting...\n");
        stack[st_index] = val;
        st_index++;
}

int pop()
{
        if(st_index > 0) {
                int val = stack[--st_index];
                stack[st_index] = 0;
                return val;
        }
        fprintf(stderr, "[!] Illegal call to pop on empty stack. Exiting...\n");
        exit(1);
}

