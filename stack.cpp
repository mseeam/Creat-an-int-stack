/********************************************************************************
 * File  :   stack.cpp                                                          *
 * Author: Mohammad Seeam                                                       *
 * Assignment 4: Simple Int Stack                                               *
 * This is a simple application to demonstrate Simple Int Stack in C++.         *
 * This header structure and files for all cpp and h files.                     *
 * This file, stack.cpp, includes only stack.h.                                 *
 *******************************************************************************/

#include "stack.h"

/********************************************************************************
* Below function is to insert int into stack                                    *
********************************************************************************/

bool Stack::push(int value)
{
    if(top < MAX-1)
    {
        stack[++top] = value;
    }
    return true;
}

/********************************************************************************
* Below function is to remove element from stack                                *
********************************************************************************/

int Stack::pop()
{   
    int value=0;

    if(top!=-1)
    {  
        value = stack[top--];
    }  
        return value;
}

/********************************************************************************
* Below function is to get the top value of the stack                           *
********************************************************************************/

int Stack::peek()
{
    int peek_value = stack[top];
    return peek_value;
}


/********************************************************************************
* Below function is to check if stack is empty                                  *
********************************************************************************/

bool Stack::isEmpty()
{  
  bool is_Empty=false;  

  if(top==-1) {
    is_Empty=true;
  }
  return is_Empty;
}
