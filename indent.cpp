/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 7
This program contains the functions for indenting.
*/

#include <iostream>
#include <cctype>
#include "indent.h"

int countChar(string line, char c){
  int count = 0;

  for(int i = 0; i < line.length(); i++){
    if(line[i] == c){
      count++;
    }
  }

  return count;
}
  

