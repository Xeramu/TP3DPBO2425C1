class Medicine:
    def __init__(self, name: str, dose: str):
        self.name = name
        self.dose = dose

    # getter
    def get_name(self):
        return self.name

    def get_dose(self):
        return self.dose

    #fungsi print obat
    def print_medicine(self):
        print(f"- Medicine: {self.name} ({self.dose})")