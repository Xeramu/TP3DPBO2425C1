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
    string getDose() const { 
        return dose; 
    }

    //fungsi print obat
    void printMedicine() const {
        cout << "- Medicine: " << name << " (" << dose << ")" << endl;
    }
};
