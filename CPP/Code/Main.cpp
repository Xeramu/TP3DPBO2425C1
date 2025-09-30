#include <iostream>
#include <vector>

#include "Person.cpp"
#include "Medicine.cpp"
#include "Patient.cpp"
#include "Doctor.cpp"
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
  p1.addMedicine(Medicine("Paracetamol", "500mg"));
  p1.addMedicine(Medicine("Vitamin C", "1000mg"));

  Patient p2("Azka", "Migraine");
  p2.addMedicine(Medicine("Ibuprofen", "400mg"));

  h.addPatient(p1);
  h.addPatient(p2);

  cout << "=== DATA AWAL ===" << endl;
  h.printInfo();

  // --- Tambah data (1 dokter + 1 pasien) ---
    string docName, spec;
    cout << "\nMasukkan nama dokter baru: ";
    getline(cin, docName);
    cout << "Masukkan spesialisasi dokter: ";
    getline(cin, spec);
    h.addDoctor(Doctor(docName, spec));

    string patName, disease;
    cout << "\nMasukkan nama pasien baru: ";
    getline(cin, patName);
    cout << "Masukkan penyakit pasien: ";
    getline(cin, disease);

    Patient newPat(patName, disease);

    string medName, dose;
    cout << "Masukkan nama obat: ";
    getline(cin, medName);
    cout << "Masukkan dosis obat: ";
    getline(cin, dose);

    newPat.addMedicine(Medicine(medName, dose));
    h.addPatient(newPat);

    // --- Print ulang setelah penambahan ---
    cout << "\n=== DATA SETELAH PENAMBAHAN ===" << endl;
    h.printInfo();

  return 0;
}

//jgn lupa ygy :D
//C:\Users\ULA\Downloads\Semester3\DPBO\prak\TP\TP3\CPP\Code>g++ Main.cpp -o program
//C:\Users\ULA\Downloads\Semester3\DPBO\prak\TP\TP3\CPP\Code>program