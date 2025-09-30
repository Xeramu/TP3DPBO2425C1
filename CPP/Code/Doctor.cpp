#include <iostream>
#include <vector>
using namespace std;

class Doctor : public Person {
private:
    string specialization;
    vector<Schedule> schedules;

public:
    Doctor(string name, string specialization) : Person(name), specialization(specialization) {}

    //get set
    void setSpecialization(string specialization) { 
      this->specialization = specialization; 
    }
    string getSpecialization() const { 
      return specialization; 
    }

    //fungsi add schedule
    void addSchedule(const Schedule& s) {
        schedules.push_back(s);
    }

    //fungsi print
    void printDoctor() {
        cout << "Doctor: " << getName() 
             << ", Specialization: " << specialization << endl;
        cout << "Schedules:" << endl;
        if (schedules.empty()) {
            cout << "- No schedule available." << endl;
        } else {
            for (auto& s : schedules) {
                s.printSchedule();
            }
        }
        cout << "================================================" << endl; // separator
    }

    ~Doctor() {}
};