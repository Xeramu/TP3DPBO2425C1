import java.util.ArrayList;

public class Patient extends Person {
    private String disease;
    private ArrayList<Medicine> medicines;

    public Patient(String name, String disease) {
        super(name);
        this.disease = disease;
        this.medicines = new ArrayList<>();
    }

    //get set
    public void setDisease(String disease) {
        this.disease = disease;
    }

    public String getDisease() {
        return disease;
    }

    //fungsi add medicine
    public void addMedicine(Medicine m) {
        medicines.add(m);
    }

    //fungsi print pasien
    public void printPatient() {
        System.out.println("Patient: " + getName() + ", Disease: " + disease);
        System.out.println(" Medicines:");
        if (medicines.isEmpty()) {
            System.out.println("- No medicines prescribed.");
        } else {
            for (Medicine m : medicines) {
                m.printMedicine();
            }
        }
        System.out.println("================================================");
    }
}