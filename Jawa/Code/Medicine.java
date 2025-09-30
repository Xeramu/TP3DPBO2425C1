public class Medicine {
    private String name;
    private String dose;

    public Medicine(String name, String dose) {
        this.name = name;
        this.dose = dose;
    }

    //fungsi print medicine
    public void printMedicine() {
        System.out.println("- Medicine: " + name + " (" + dose + ")");
    }
}