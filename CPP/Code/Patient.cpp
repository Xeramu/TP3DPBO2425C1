#include <iostream>

#include <vector>
using namespace std;


class Patient : public Person {

  string disease;

public:

  Patient(string name, string disease)

    : Person(name), disease(disease) {}


  // Setter & Getter

  void setDisease(string disease) { this->disease = disease;
}

  string getDisease() const { return disease; }


  void printPatient() {

    cout << "Patient: " << getName()

       << ", Disease: " << disease << endl;

  }


  ~Patient() {}

};