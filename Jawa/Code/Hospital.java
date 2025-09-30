import java.util.ArrayList;

public class Hospital implements ManageDoctors, ManagePatients {
    private String hospitalName;
    private ArrayList<Patient> patients;
    private ArrayList<Doctor> doctors;

    public Hospital(String name) {
        this.hospitalName = name;
        this.patients = new ArrayList<>();
        this.doctors = new ArrayList<>();
    }

    //get set
    public void setHospitalName(String name) {
        this.hospitalName = name;
    }

    public String getHospitalName() {
        return hospitalName;
    }

    //fungsi add pasien
    @Override
    public void addPatient(Patient p) {
        patients.add(p);
    }

    //fungsi add doctor
    @Override
    public void addDoctor(Doctor d) {
        doctors.add(d);
    }

    //fungsi print doctor dan pasien
    public void printInfo() {
        System.out.println("=>> RSUD " + hospitalName + " <<=");

        System.out.println("\nList Doctors:\n");
        for (Doctor d : doctors) {
            d.printDoctor();
        }

        System.out.println("\nList Patients:\n");
        for (Patient p : patients) {
            p.printPatient();
        }
    }
}