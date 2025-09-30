#include <iostream>
#include <vector>
using namespace std;

class Doctor : public Person {
  string specialization;

public:
  Doctor(string name, string specialization) : Person(name), specialization(specialization) {}

  // Setter & Getter
  void setSpecialization(string specialization) {
    this->specialization = specialization; }
      string getSpecialization() const { return specialization;
  } 

  void printDoctor() {
    cout << "Doctor: " << getName() << ", Specialization: " << specialization << endl;
  }

  ~Doctor() {}

};