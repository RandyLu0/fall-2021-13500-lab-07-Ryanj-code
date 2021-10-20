/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 7
This program contains the indent functions.
*/

#include <iostream>
#include <cctype>
#include "indent.h"

int countChar(std::string line, char c){
  int count = 0;

  for(int i = 0; i < line.length(); i++){
    if(line[i] == c){
      count++;
    } // Goes through line and checks if any char c occurs in line.
  } // Everytime c occurs in line, count increments by 1.

  return count;
} // Return count.

int count = 0;

std::string indent(std::string line){
  std::string s = "";
  
  for(int i = 0; i < count; i++){
    s += "\t";
  } // Adds count number of \t before the line.

  s += line;
  // Adds the line to s;
  if(countChar(line, '{') > 0){
    count++;
  } // Increment count by 1 if an open bracket is in the line. 

  if(countChar(line, '}') > 0){
    count--;
  } // Decrement count by 1 if a closed bracket is in the line.
  
  return s;
} // Return s.



