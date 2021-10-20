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
    }

    if(check){
      s += line.substr(i);
      s += "\n";
      break;
    }
  }

  return s;
}
