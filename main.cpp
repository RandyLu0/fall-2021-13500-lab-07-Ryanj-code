#include <iostream>
#include "unindent.h"
#include "indent.h"

int main(){
  std::cout << "Testing unindent:" << "\n";

  std::string line;
  while(getline(std::cin, line)) {
    std::cout<<removeLeadingSpaces(line) << "\n";
  }

  return 0;
}
