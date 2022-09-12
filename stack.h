/********************************************************************************
 * File  :   stack.h                                                            *
 * Author: Mohammad Seeam                                                       *
 * Assignment 4: Simple Int Stack                                               *
 * This is a simple application to demonstrate Simple Int Stack in C++.         *
 * This header structure and files for all cpp and h files.                     *                                 *
 *******************************************************************************/

#ifndef STACK_STACK_H
#define STACK_STACK_H

class Stack
{
    private:
    #define MAX 10  //MAX is maximum size of stack
    int top;
    int stack[MAX];  //Maximum size of Stack

    public:
    Stack()
    {
        top = -1;
    }

    //Declaring all the function
    bool push(int value);
    int pop();
    int peek();
    bool isEmpty();
};

#endif //STACK_STACK_H