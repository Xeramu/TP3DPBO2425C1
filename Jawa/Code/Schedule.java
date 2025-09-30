public class Schedule {
    private String day;
    private String time;
    private String room;

    public Schedule(String day, String time, String room) {
        this.day = day;
        this.time = time;
        this.room = room;
    }

    //print schedule
    public void printSchedule() {
        System.out.println("- " + day + " at " + time + " (Room: " + room + ")");
    }
}