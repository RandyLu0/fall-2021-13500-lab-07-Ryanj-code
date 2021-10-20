/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 7
This program contains the unindent function.
*/

#include <iostream>
#include <cctype>
#include "unindent.h"

std::string removeLeadingSpaces(std::string line){
  std::string s = "";
  bool check = false;
  
  for(int i = 0; i < line.length(); i++){
    if(!isspace(line[i])){
	check = true;
    } // When the first character in the line that is not a space appears, set check to true;

    if(check){
      s += line.substr(i);
      s += "\n";
      break; 
    } // If check is true, add the line and \n to s, and then break.
  } 

  return s;
} // Return s.
