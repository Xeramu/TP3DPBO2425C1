import java.util.ArrayList;

public class Doctor extends Person {
    private String specialization;
    private ArrayList<Schedule> schedules;

    public Doctor(String name, String specialization) {
        super(name);
        this.specialization = specialization;
        this.schedules = new ArrayList<>();
    }

    //get set
    public void setSpecialization(String specialization) {
        this.specialization = specialization;
    }

    public String getSpecialization() {
        return specialization;
    }

    //fungsi add shedule
    public void addSchedule(Schedule s) {
        schedules.add(s);
    }

    //fungsi print doctor
    public void printDoctor() {
        System.out.println("Doctor: " + getName() + ", Specialization: " + specialization);
        System.out.println("Schedules:");
        if (schedules.isEmpty()) {
            System.out.println("- No schedule available.");
        } else {
            for (Schedule s : schedules) {
                s.printSchedule();
            }
        }
        System.out.println("================================================");
    }
}