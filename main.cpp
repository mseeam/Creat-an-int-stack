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

    std::cout<<"Trying to push elements are: "<<std::endl;
    My_stack_one.push(1);
    std::cout << "1  tried to push to the stack" << std::endl;
    My_stack_one.push(2);
    std::cout << "2  tried to push to the stack" << std::endl;
    My_stack_one.push(3);
    std::cout << "3  tried to push to the stack" << std::endl;
    My_stack_one.push(4);
    std::cout << "4  tried to push to the stack" << std::endl;
    My_stack_one.push(5);
    std::cout << "5  tried to push to the stack" << std::endl;
    My_stack_one.push(6);
    std::cout << "6  tried to push to the stack" << std::endl;
    My_stack_one.push(7);
    std::cout << "7  tried to push to the stack" << std::endl;
    My_stack_one.push(8);
    std::cout << "8  tried to push to the stack" << std::endl;
    My_stack_one.push(9);
    std::cout << "9  tried to push to the stack" << std::endl;
    My_stack_one.push(10);
    std::cout << "10 tried to push to the stack" << std::endl;
    My_stack_one.push(11);
    std::cout << "11 tried to push to the stack" << std::endl;
    My_stack_one.push(12);
    std::cout << "12 tried to push to the stack" << std::endl;
    My_stack_one.push(13);
    std::cout << "13 tried to push to the stack" << std::endl;
    My_stack_one.push(14);
    std::cout << "14 tried to push to the stack" << std::endl;
    My_stack_one.push(15);
    std::cout << "15 tried to push to the stack" << std::endl;

    std::cout << std::endl;

    //print top/last element of stack 
    std::cout<<"The last element successfully got pushed is : "<<std::endl;
    std::cout << My_stack_one.peek()<<" is last pushed element" <<std::endl;

    std::cout << std::endl;

    std::cout<<"Popping elements are: "<<std::endl;
    std::cout << My_stack_one.pop() << " Popped from stack "<< std::endl;
    std::cout << My_stack_one.pop() << "  Popped from stack "<< std::endl;
    std::cout << My_stack_one.pop() << "  Popped from stack "<< std::endl;

    std::cout << std::endl;
    
    //print top element of stack after poping
    std::cout<<"Top element is : "<<std::endl;
    std::cout << My_stack_one.peek() << " is the top element "<<std::endl;

    std::cout << std::endl;

    std::cout << "Check if the stack is empty or not : " << std::endl;
    if(My_stack_one.isEmpty()==true){
        std::cout << "The stack is empty ! "<<std::endl;
    }else{
        std::cout << "The stack is not empty ! "<<std::endl;
    }

    std::cout << std::endl;

    std::cout<<"Popping elements are: "<<std::endl;
    std::cout << My_stack_one.pop() << "  Popped from stack "<< std::endl;
    std::cout << My_stack_one.pop() << "  Popped from stack "<< std::endl;
    std::cout << My_stack_one.pop() << "  Popped from stack "<< std::endl;
    std::cout << My_stack_one.pop() << "  Popped from stack "<< std::endl;
    std::cout << My_stack_one.pop() << "  Popped from stack "<< std::endl;
    std::cout << My_stack_one.pop() << "  Popped from stack "<< std::endl;
    std::cout << My_stack_one.pop() << "  Popped from stack "<< std::endl;

    std::cout << std::endl;

    std::cout << "Check if the stack is empty or not : " << std::endl;
    if(My_stack_one.isEmpty()==true){
        std::cout << "The stack is empty ! "<<std::endl;
    }else{
        std::cout << "The stack is not empty ! "<<std::endl;
    }

    return 0;

}

/********************************************************************************
* Below is the output of the entire program                                     *
********************************************************************************/

/*
Trying to push elements are: 
1  tried to push to the stack
2  tried to push to the stack
3  tried to push to the stack
4  tried to push to the stack
5  tried to push to the stack
6  tried to push to the stack
7  tried to push to the stack
8  tried to push to the stack
9  tried to push to the stack
10 tried to push to the stack
11 tried to push to the stack
12 tried to push to the stack
13 tried to push to the stack
14 tried to push to the stack
15 tried to push to the stack

The last element successfully got pushed is : 
10 is last pushed element

Popping elements are: 
10 Popped from stack 
9  Popped from stack 
8  Popped from stack 

Top element is : 
7 is the top element 

Check if the stack is empty or not : 
The stack is not empty ! 

Popping elements are: 
7  Popped from stack 
6  Popped from stack 
5  Popped from stack 
4  Popped from stack 
3  Popped from stack 
2  Popped from stack 
1  Popped from stack 

Check if the stack is empty or not : 
The stack is empty ! 
*/
    



