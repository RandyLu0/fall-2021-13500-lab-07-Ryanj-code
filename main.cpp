/*
Author: Ryan Jiang
Course: CSCI-135
Instructor: Tong Yi and Mike Zamansky
Assignment: Lab 7
This program contains the tests for the unindent and indent functions.
*/

#include <iostream>
#include <fstream>
#include "unindent.h"
#include "indent.h"

int main(){
  std::cout << "Bad Code 1:" << "\n";

  std::ifstream fin("bad-code.cpp");
  if(fin.fail()){
    std::cerr << "File cannot be opened";
    exit(1);
  }

  std::string line;
  while(getline(fin, line)) {
    std::cout << line << "\n";
  }

  fin.close();
  fin.open("bad-code.cpp");
  
  std::cout << "\n" << "Testing unindent: " << "\n";

  while(getline(fin, line)) {
    std::cout << removeLeadingSpaces(line);
  }
  
  fin.close();
  fin.open("bad-code.cpp");

  std::cout << "\n" << "Testing indent: " << "\n";
  
  std::string unindent;
  while(getline(fin, line)) {
    unindent = removeLeadingSpaces(line);
    std::cout << indent(unindent) << "\n";
  }

  fin.close();
  
    
  std::cout << "Bad Code 2:" << "\n";

  std::ifstream fin2("bad-code2.cpp");
  if(fin2.fail()){
    std::cerr << "File cannot be opened";
    exit(1);
  }

  std::string line2;
  while(getline(fin2, line2)) {
    std::cout << line2 << "\n";
  }

  fin2.close();
  fin2.open("bad-code2.cpp");
  
  std::cout << "\n" << "Testing unindent: " << "\n";

  while(getline(fin2, line2)) {
    std::cout << removeLeadingSpaces(line2);
  }
  
  fin2.close();
  fin2.open("bad-code2.cpp");

  std::cout << "\n" << "Testing indent: " << "\n";
  
  std::string unindent2;
  while(getline(fin2, line2)) {
    unindent2 = removeLeadingSpaces(line2);
    std::cout << indent(unindent2) << "\n";
  }

  fin2.close();
  
  return 0;
}
