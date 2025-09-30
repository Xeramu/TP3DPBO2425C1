#include <iostream>
using namespace std;

class Schedule {
private:
    string day;
    string time;
    string room;

public:
    Schedule(string day, string time, string room) : day(day), time(time), room(room) {}

    //fungsi print schedule
    void printSchedule() const {
        cout << "- " << day << " at " << time << " (Room: " << room << ")" << endl;
    }
};