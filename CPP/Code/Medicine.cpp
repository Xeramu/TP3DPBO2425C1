#include <iostream>
using namespace std;

class Medicine {
private:
    string name;
    string dose;

public:
    Medicine(string name, string dose) : name(name), dose(dose) {}

    //get set
    string getName() const { 
        return name; 
    }

    void setName(string name) {
			this->name = name;
	}

    string getDose() const { 
        return dose; 
    }

    void setDose(string dose) {
			this->dose = dose;
	}

    //fungsi print obat
    void printMedicine() const {
        cout << "- Medicine: " << name << " (" << dose << ")" << endl;
    }
};
