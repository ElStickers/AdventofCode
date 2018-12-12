#include <fstream>
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::ifstream;
using std::string;
using std::endl;

int parseFile(string filename);

int main() {
  string filename;
  cout << "Please enter filename: " << endl;
  cin >> filename;
  int floor;
  floor = parseFile(filename);
  cout << "We ended up in floor: ";
  cout << floor;
  return 0;
}

int parseFile(string filename) {
  ifstream inputfile(filename);
  char c;
  int i = 0;
  if(inputfile.is_open()) {
    while(inputfile.get(c)) {
      if(c == ')') {
        i--;
      } else if (c == '(') {
        i++;
      } else {

      }
    }
  }
  return i;
}
