/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Michael Gilday
 */

#include <iostream>

//Chapter 3, Exercise #8 - (Program that takes in an integer value as inputand outputs whether the integer is even or odd.)

//This method attempts to see if the integer is a multiple of 2, if not then it must be an odd number.
void even_checker(int i){
  if ( i % 2 == 0){
    std::cout << "The value " << i << " is an even number.";
  }
  else{
    std::cout << "The value " << i << " is an odd number.";
  }
}
