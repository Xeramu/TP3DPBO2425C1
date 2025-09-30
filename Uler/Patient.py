from Person import Person
from Medicine import Medicine

class Patient(Person):
    def __init__(self, name: str, disease: str):
        super().__init__(name)
        self.disease = disease
        self.medicines: list[Medicine] = []

    #get set
    def set_disease(self, disease: str):
        self.disease = disease

    def get_disease(self) -> str:
        return self.disease

    #fungsi add obat
    def add_medicine(self, m: Medicine):
        self.medicines.append(m)

    #fungsi print pasien
    def print_patient(self):
        print(f"Patient: {self.get_name()}, Disease: {self.disease}")
        print(" Medicines:")
        if not self.medicines:
            print("- No medicines prescribed.")
        else:
            for m in self.medicines:
                m.print_medicine()
        print("================================================")