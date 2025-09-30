import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        //nama hospital
        Hospital h = new Hospital("El Angjay");

        //Data awal
        Doctor d1 = new Doctor("Dr. Hadiyanto", "Dentist");
        d1.addSchedule(new Schedule("Monday", "09:00 - 12:00", "101"));
        d1.addSchedule(new Schedule("Wednesday", "13:00 - 16:00", "102"));

        Doctor d2 = new Doctor("Dr. Adam", "Neurology");
        d2.addSchedule(new Schedule("Tuesday", "10:00 - 14:00", "201"));

        h.addDoctor(d1);
        h.addDoctor(d2);

        Patient p1 = new Patient("Bintang", "Flu");
        p1.addMedicine(new Medicine("Paracetamol", "500mg"));
        p1.addMedicine(new Medicine("Vitamin C", "1000mg"));

        Patient p2 = new Patient("Azka", "Migraine");
        p2.addMedicine(new Medicine("Ibuprofen", "400mg"));

        h.addPatient(p1);
        h.addPatient(p2);

        //Print sebelum tambah
        h.printInfo();

        //input data dr user
        String dName = sc.nextLine();
        String dSpec = sc.nextLine();
        Doctor dUser = new Doctor(dName, dSpec);

        String day = sc.nextLine();
        String time = sc.nextLine();
        String room = sc.nextLine();
        dUser.addSchedule(new Schedule(day, time, room));
        h.addDoctor(dUser);

        String pName = sc.nextLine();
        String pDisease = sc.nextLine();
        Patient pUser = new Patient(pName, pDisease);

        String mName = sc.nextLine();
        String mDose = sc.nextLine();
        pUser.addMedicine(new Medicine(mName, mDose));
        h.addPatient(pUser);

        //Print sesudah tambah
        System.out.println();
        h.printInfo();

        sc.close();
    }
}

//jgn lupa ygy
//javac *.java
//java Main

/* 
Yuyun
Tulang
Thursday
12:00 - 16:00
301
Uma
Patah Tulang
Bius
1000mg
*/