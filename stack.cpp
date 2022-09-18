/********************************************************************************
 * File  :   stack.cpp                                                          *
 * Author: Mohammad Seeam                                                       *
 * Assignment 4: Simple Int Stack                                               *
 * This is a simple application to demonstrate Simple Int Stack in C++.         *
 * This header structure and files for all cpp and h files.                     *
 * This file, stack.cpp, includes only stack.h.                                 *
 *******************************************************************************/

#include "stack.h"
#include <string>

Stack::Stack()
{
    top = -1;
}

/********************************************************************************
* Below function is to insert int into stack
* returns true if success, false if failure                                    *
********************************************************************************/

bool Stack::push(int value)
{   
    bool push_successful_result=false;

    if(top < MAX-1)
    {
        stack[++top] = value;
        push_successful_result=true;
    }

    return push_successful_result;
}

/********************************************************************************
* Below function is to remove element from stack                                *
********************************************************************************/

int Stack::pop()
{   

    if(top!=-1)
    {  
        int value=0;
        value = stack[top--];
        return value;

    }else{

        throw std::underflow_error("The stack is currently empty, can't pop/remove element !");

    }
        
}

/********************************************************************************
* Below function is to get the top value of the stack                           *
********************************************************************************/

int Stack::peek()
{
    
    if(top!=-1)
    {   
        int value=0;
        value = stack[top];
        return value;

    }else {

        throw std::underflow_error("No element/value on Stack to show ! ");
    }

}


/********************************************************************************
* Below function is to check if stack is empty                                  *
********************************************************************************/

bool Stack::isEmpty()
{  
  bool is_Empty=false;  

  if(top==-1){

    is_Empty=true;

  }

  return is_Empty;

}


