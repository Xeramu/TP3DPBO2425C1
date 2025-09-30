#include <iostream>
#include <vector>

using namespace std;

class Hospital {
  string hospitalName;
  vector<Patient> patients;
  vector<Doctor> doctors;

public:

  Hospital(string name) {
    hospitalName = name;
  }

  // Setter & Getter
  void setHospitalName(string name) { 
    hospitalName = name; }
  string getHospitalName() const { 
    return hospitalName; }

    // Tambah Doctor & Patient
 void addPatient(const Patient& p) { 
 patients.push_back(p); }
  void addDoctor(const Doctor& d) { 
 doctors.push_back(d); }

// Tampilkan data
 void printInfo() {
 cout << "=== Hospital: " << hospitalName << " ===" << endl;
 cout << "\nDoctors:" << endl;
 for (auto& d : doctors) {
 d.printDoctor();
 }

 cout << "\nPatients:" << endl;
 for (auto& p : patients) {
 p.printPatient();
 }
 }
  ~Hospital() {}

};