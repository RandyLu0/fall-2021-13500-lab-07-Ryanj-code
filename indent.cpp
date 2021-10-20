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
    }
  }

  return count;
}

int count = 0;

std::string indent(std::string line){
  std::string s = "";
  
  for(int i = 0; i < count; i++){
    s += "\t";
  }

  s += line;

  if(countChar(line, '{') > 0){
    count++;
  }

  if(countChar(line, '}') > 0){
    count--;
  }
  
  return s;
}



