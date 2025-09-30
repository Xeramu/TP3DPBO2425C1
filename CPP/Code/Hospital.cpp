//manggil kelas
#include "Person.cpp"
#include "Schedule.cpp"
#include "Doctor.cpp"
#include "Medicine.cpp"
#include "Patient.cpp"
#include <iostream>
#include <vector>
using namespace std;

class Hospital {
private:
    string hospitalName;
    vector<Patient> patients;
    vector<Doctor> doctors;

public:

//getter setter
    Hospital(string name) {
        hospitalName = name;
    }

    void setHospitalName(string name) { 
      hospitalName = name; 
    }

    string getHospitalName() const { 
      return hospitalName; 
    }

    //fungsi nambahin pasien dan dokter
    void addPatient(const Patient& p) {
       patients.push_back(p); 
    }
    void addDoctor(const Doctor& d) { 
      doctors.push_back(d); 
    }

    //fungsi print
    void printInfo() {
        cout << "=>> RSUD " << hospitalName << " <<=" << endl;

        cout << "\nList Doctors:\n" << endl;
        for (auto& d : doctors) {
            d.printDoctor();
        }

        cout << "\nList Patients:\n" << endl;
        for (auto& p : patients) {
            p.printPatient();
        }
    }
};