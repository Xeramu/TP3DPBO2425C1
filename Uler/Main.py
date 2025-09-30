from Hospital import Hospital
from Doctor import Doctor
from Schedule import Schedule
from Patient import Patient
from Medicine import Medicine

def main():
    #buat nama rumah sakitnya
    h = Hospital("El Angjay")

    #Data awal
    d1 = Doctor("Dr. Hadiyanto", "Dentist")
    d1.add_schedule(Schedule("Monday", "09:00 - 12:00", "101"))
    d1.add_schedule(Schedule("Wednesday", "13:00 - 16:00", "102"))

    d2 = Doctor("Dr. Adam", "Neurology")
    d2.add_schedule(Schedule("Tuesday", "10:00 - 14:00", "201"))

    h.add_doctor(d1)
    h.add_doctor(d2)

    p1 = Patient("Bintang", "Flu")
    p1.add_medicine(Medicine("Paracetamol", "500mg"))
    p1.add_medicine(Medicine("Vitamin C", "1000mg"))

    p2 = Patient("Azka", "Migraine")
    p2.add_medicine(Medicine("Ibuprofen", "400mg"))

    h.add_patient(p1)
    h.add_patient(p2)

    #print sebelum tambah
    h.print_info()

    #minta tambah data dari user
    print("\n=== Tambah Dokter Baru ===")
    d_name = input("Nama Dokter: ")
    d_spec = input("Spesialisasi: ")
    d_user = Doctor(d_name, d_spec)

    day = input("Hari: ")
    time = input("Waktu: ")
    room = input("Ruangan: ")
    d_user.add_schedule(Schedule(day, time, room))
    h.add_doctor(d_user)

    print("\n=== Tambah Pasien Baru ===")
    p_name = input("Nama Pasien: ")
    p_disease = input("Penyakit: ")
    p_user = Patient(p_name, p_disease)

    m_name = input("Nama Obat: ")
    m_dose = input("Dosis: ")
    p_user.add_medicine(Medicine(m_name, m_dose))
    h.add_patient(p_user)

    #print sesudah tambah
    h.print_info()

if __name__ == "__main__":
    main()

#Yuyun
#Tulang
# Thursday
# 12:00 - 16:00
#301
#Uma
#Patah Tulang
#Bius
#1000mg