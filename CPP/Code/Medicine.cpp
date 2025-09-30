#include <iostream>
#include <string>
using namespace std;

class Medicine {
private:
    string name;
    string dose;

public:
    Medicine(string name, string dose) : name(name), dose(dose) {}

    string getName() const { return name; }
    string getDose() const { return dose; }

    void printMedicine() const {
        cout << "- Medicine: " << name << " (" << dose << ")" << endl;
    }
};