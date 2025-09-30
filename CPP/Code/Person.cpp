#include <iostream>
#include <vector>
using namespace std;

class Person {
protected:
  string name;

public:
  // Constructor
  Person(string name) {
    this->name = name;
  }

  // Setter
  void setName(string name) {
    this->name = name;
  }

  // Getter
  string getName() const {
    return name;
  }

  ~Person() {}
};