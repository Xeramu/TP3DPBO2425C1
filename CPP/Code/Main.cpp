#include <iostream>
#include <vector>
#include "Hospital.cpp"
using namespace std;

int main() {
    //buat nama rumah sakitnya
    Hospital h("El Angjay");

    //Data awal
    Doctor d1("Dr. Hadiyanto", "Dentist");
    d1.addSchedule(Schedule("Monday", "09:00 - 12:00", "101"));
    d1.addSchedule(Schedule("Wednesday", "13:00 - 16:00", "102"));

    Doctor d2("Dr. Adam", "Neurology");
    d2.addSchedule(Schedule("Tuesday", "10:00 - 14:00", "201"));

    h.addDoctor(d1);
    h.addDoctor(d2);

    Patient p1("Bintang", "Flu");
    p1.addMedicine(Medicine("Paracetamol", "500mg"));
    p1.addMedicine(Medicine("Vitamin C", "1000mg"));

    Patient p2("Azka", "Migraine");
    p2.addMedicine(Medicine("Ibuprofen", "400mg"));

    h.addPatient(p1);
    h.addPatient(p2);

    //print sebelum tambah
    h.printInfo();

    //minta tambah data dr user
    string dName, dSpec, day, time, room;
    getline(cin, dName);
    getline(cin, dSpec);
    Doctor dUser(dName, dSpec);

    getline(cin, day);
    getline(cin, time);
    getline(cin, room);
    dUser.addSchedule(Schedule(day, time, room));
    h.addDoctor(dUser);

    string pName, pDisease, mName, mDose;
    getline(cin, pName);
    getline(cin, pDisease);
    Patient pUser(pName, pDisease);

    getline(cin, mName);
    getline(cin, mDose);
    pUser.addMedicine(Medicine(mName, mDose));
    h.addPatient(pUser);

    //print sesudah tambah
    h.printInfo();

    return 0;
}

//jgn lupa ygy :D
//g++ Main.cpp -o program
//program

/*
Testcase:

Yuyun
Tulang
Thursday
12:00 - 16:00
301
Uma
Patah Tulang
Bius
1000mg
*/