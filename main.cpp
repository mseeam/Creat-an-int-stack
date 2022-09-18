/********************************************************************************
 * File  :   main.cpp                                                           *
 * Author: Mohammad Seeam                                                       *
 * Assignment 4: Simple Int Stack                                               *
 * This is a simple application to demonstrate Simple Int Stack in C++.         *
 * This header structure and files for all cpp and h files.                     *
 * This file, main.cpp, includes only main.h.                                   *
 *******************************************************************************/

#include "main.h"

/********************************************************************************
* Below function is main() function                                             *
********************************************************************************/

int main(){

    class Stack My_stack_one;

     for (int value = 1; value <= 50; ++value){
        if(My_stack_one.push(value)==true){
            std::cout<<value<<" pushed to stack"<<std::endl;
        }
     }

    std::cout << std::endl;
    
    while(My_stack_one.isEmpty()!=true){
        try{
            std::cout << My_stack_one.pop() << "  Popped from stack "<< std::endl;
        }catch (std::underflow_error& ex){
            std::cerr << ex.what() << std::endl;
        }
    }

    std::cout << std::endl;

    try{
        std::cout << My_stack_one.pop() << "  Popped from stack "<< std::endl;
    }catch (std::underflow_error& ex){
        std::cerr << ex.what() << std::endl;
    }

    std::cout<<std::endl;

    try{
        std::cout << My_stack_one.peek() << " is the top element"<< std::endl;
    }catch (std::underflow_error& ex){
        std::cerr << ex.what() << std::endl;
    }

    std::cout << std::endl;

    for (int value = 11; value <=15; ++value){
        My_stack_one.push(value);
            std::cout<<value<<" Pushed on stack"<<std::endl;
    }

    std::cout << std::endl;

    try{
        std::cout << My_stack_one.pop() << "  Popped from stack "<< std::endl;
    }catch (std::underflow_error& ex){
        std::cerr << ex.what() << std::endl;
    }

    std::cout << std::endl;

    try{
        std::cout << My_stack_one.peek() << " is the top element"<< std::endl;
    }catch (std::underflow_error& ex){
        std::cerr << ex.what() << std::endl;
    }

    std::cout << std::endl;

    std::cout<<"Check if the stack is currently empty or not : ";
    if(My_stack_one.isEmpty()==true){
        std::cout<<"The stack is empty"<<std::endl;
    }else{
        std::cout<<"The stack is not empty"<<std::endl;
    }

    std::cout << std::endl;

    while(My_stack_one.isEmpty()!=true){
        try{
            std::cout << My_stack_one.pop() << "  Popped from stack "<< std::endl;
        }catch (std::underflow_error& ex){
            std::cerr << ex.what() << std::endl;
            }
    }

    std::cout << std::endl;

    std::cout<<"Check if the stack is currently empty or not : ";
    if(My_stack_one.isEmpty()==true){
        std::cout<<"The stack is empty"<<std::endl;
    }else{
        std::cout<<"The stack is not empty"<<std::endl;
    }

    std::cout << std::endl;

    try{
        std::cout << My_stack_one.pop() << "  Popped from stack "<< std::endl;
    }catch (std::underflow_error& ex){
        std::cerr << ex.what() << std::endl;
        }

    std::cout << std::endl;

    try{
         std::cout << My_stack_one.peek() << " is the top element"<< std::endl;
    }catch (std::underflow_error& ex){
        std::cerr << ex.what() << std::endl;
        }
};

/********************************************************************************
* Below is the output of the entire program                                     *
********************************************************************************/

/*
1 pushed to stack
2 pushed to stack
3 pushed to stack
4 pushed to stack
5 pushed to stack
6 pushed to stack
7 pushed to stack
8 pushed to stack
9 pushed to stack
10 pushed to stack

10  Popped from stack 
9  Popped from stack 
8  Popped from stack 
7  Popped from stack 
6  Popped from stack 
5  Popped from stack 
4  Popped from stack 
3  Popped from stack 
2  Popped from stack 
1  Popped from stack 

The stack is currently empty, can't pop/remove element !

No element/value on Stack to show ! 

11 Pushed on stack
12 Pushed on stack
13 Pushed on stack
14 Pushed on stack
15 Pushed on stack

15  Popped from stack 

14 is the top element

Check if the stack is currently empty or not : The stack is not empty

14  Popped from stack 
13  Popped from stack 
12  Popped from stack 
11  Popped from stack 

Check if the stack is currently empty or not : The stack is empty

The stack is currently empty, can't pop/remove element !

No element/value on Stack to show ! 
*/
