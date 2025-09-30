#include <iostream>
#include <vector>
using namespace std;

class Patient : public Person {
private:
    string disease;
    vector<Medicine> medicines;

public:
    Patient(string name, string disease) : Person(name), disease(disease) {}

    //get set
    void setDisease(string disease) { 
        this->disease = disease; 
    }
    
    string getDisease() const { 
        return disease; 
    }

    //fungsi add obat
    void addMedicine(const Medicine& m) {
        medicines.push_back(m);
    }

    //fungsi print pasien
    void printPatient() {
        cout << "Patient: " << getName() << ", Disease: " << disease << endl;
        cout << " Medicines:" << endl;
        if (medicines.empty()) {
            cout << "- No medicines prescribed." << endl;
        } else {
            for (auto& m : medicines) {
                m.printMedicine();
            }
        }
        cout << "================================================" << endl; // separator
    }
};