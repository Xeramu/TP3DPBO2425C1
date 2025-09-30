#include <vector>

class Patient : public Person {
private:
    string disease;
    vector<Medicine> medicines;

public:
    Patient(string name, string disease) : Person(name), disease(disease) {}

    void setDisease(string disease) { this->disease = disease; }
    string getDisease() const { return disease; }

    void addMedicine(const Medicine& m) {
        medicines.push_back(m);
    }

    void printPatient() {
        cout << "Patient: " << getName() << ", Disease: " << disease << endl;
        cout << " Medicines:" << endl;
        for (auto& m : medicines) {
            m.printMedicine();
        }
    }
};