#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "ustream.h"

int main() {
  std::string str;
  std::ofstream fout("out.txt",std::ios::app);
  std::ofstream fout2("out2.txt",std::ios::app);
  std::stringstream sout(str);

  unifiedStream uout(std::cout, fout, sout,fout2);
  
  std::string input;

  std::cout << "Enter a string: ";
  getline(std::cin,input);

  std::string stars (input.length()+4,'*');
  
  

  uout << stars << "\n";
  uout << "* " << input << " *\n";
  uout << stars << "\n\n\n";
  

  std::cout << sout.str();
}