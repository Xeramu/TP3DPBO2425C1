from Person import Person
from Schedule import Schedule

class Doctor(Person):
    def __init__(self, name, specialization):
        super().__init__(name)
        self.specialization = specialization
        self.schedules = []

    #get set
    def set_specialization(self, specialization):
        self.specialization = specialization

    def get_specialization(self):
        return self.specialization

    #fungsi add schedule
    def add_schedule(self, schedule: Schedule):
        self.schedules.append(schedule)

    #fungsi print dokter
    def print_doctor(self):
        print(f"Doctor: {self.get_name()}, Specialization: {self.specialization}")
        print("Schedules:")
        if not self.schedules:
            print("- No schedule available.")
        else:
            for s in self.schedules:
                s.print_schedule()
        print("================================================")