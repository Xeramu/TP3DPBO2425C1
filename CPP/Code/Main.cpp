#include <iostream>
#include <vector>

#include "Person.cpp"
#include "Doctor.cpp"
#include "Patient.cpp"
#include "Hospital.cpp"

using namespace std;


int main() {

  Hospital h("Rumah Sakit DPBO");
  // Tambahkan dokter & pasien
  Doctor d1("Dr. Hadiyanto", "Dentist");
  Doctor d2("Dr. Adam", "Neurology");
  Doctor d3("Dr. Lulu", "Optometry");

  h.addDoctor(d1);
  h.addDoctor(d2);
  h.addDoctor(d3);

  Patient p1("Bintang", "Flu");
  Patient p2("Azka", "Migraine");
  Patient p3("Nurul", "Fever");
  Patient p4("Lalala", "Broken bones");

  h.addPatient(p1);
  h.addPatient(p2);
  h.addPatient(p3);
  h.addPatient(p4);

  h.printInfo();

  return 0;

}