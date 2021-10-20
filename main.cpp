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
  
  return 0;
}
