from Doctor import Doctor
from Patient import Patient

class Hospital:
    def __init__(self, name):
        self.hospital_name = name
        self.patients = []
        self.doctors = []

    # getter & setter
    def set_hospital_name(self, name):
        self.hospital_name = name

    def get_hospital_name(self):
        return self.hospital_name

    # fungsi nambahin pasien dan dokter
    def add_patient(self, patient: Patient):
        self.patients.append(patient)

    def add_doctor(self, doctor: Doctor):
        self.doctors.append(doctor)

    # fungsi print
    def print_info(self):
        print(f"=>> RSUD {self.hospital_name} <<=")

        print("\nList Doctors:\n")
        for d in self.doctors:
            d.print_doctor()

        print("\nList Patients:\n")
        for p in self.patients:
            p.print_patient()