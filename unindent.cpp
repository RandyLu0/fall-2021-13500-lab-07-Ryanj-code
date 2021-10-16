/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 7
This program contains the unindent function.
*/

#include <iostream>
#include <cctype>

std::string removeLeadingSpaces(std::string line){
  std::string s = "";
  for(int i = 0; i < line.length(); i++){
    if(!isspace(line[i])){
	s += line[i];
    }
  }

  return s;
}
