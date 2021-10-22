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

int tabs = 0;

std::string indent(std::string line){
  if(tabs < 0){
    tabs = 0;
  } // Sets tabs to 0 if it is negative.
  
  std::string s = "";

  if(line[0] == '}'){
    tabs--;
  } // Decrement tabs by 1 if a closed bracket is in the line.

  for(int i = 0; i < tabs; i++){
    s += "\t";
  } // Adds tabs number of \t before the line.

  s += line;
  // Adds the line to s;
  if(countChar(line, '{') > 0){
    tabs++;
  } // Increment tabs by 1 if an open bracket is in the line. 
  
  return s;
} // Return s.


