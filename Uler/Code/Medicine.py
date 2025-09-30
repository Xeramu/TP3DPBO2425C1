class Medicine:
    def __init__(self, name: str, dose: str):
        self.name = name
        self.dose = dose

    # getter
    def get_name(self):
        return self.name
    
    def set_name(self, name: str) -> None:
        self._name = str(name)

    def get_dose(self):
        return self.dose
    
    def set_dose(self, dose: str) -> None:
        self._dose = str(dose)

    #fungsi print obat
    def print_medicine(self):
        print(f"- Medicine: {self.name} ({self.dose})")