<< Saya, Umarex Shauma Andromeda, dengan NIM 2400598, mengerjakan TP3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek. Untuk keberkahan-Nya, maka saya tidak akan melakukan kecurangan seperti yang telah dispesifikasi >>

==<< diagram >>==

![DiagramRelasi](https://github.com/user-attachments/assets/4af1471a-5a3e-403e-846c-9867290a1a12)

==<< atribut & method >>==
1. Person (parent class)
   Atribut:
   - string name buat nama orang (dokter/pasien)
   Method:
   - getter buat nagmbil nama
   - setter buat ngubah nama

2. Doctor (extend class person)
   Atribut:
   - string specialization buat spesialisasi dokter
   - List schedule buat daftar jadwal doketr (pake composition)
   Method:
   - getter specialization buat nagmbil spesialisasi
   - setter specialazation buat ngubah spesialisasi
   - addschedule buat nambahin jadwal dokter
   - printDoctor buat nampilin info dokter dan jadwal dokter

3. Patient (extend class person)
   Atribut:
   - string disease buat penyakit pasien
   - List medicine buat daftar obat pasien (pake composition)
   Method:
   - getter disease buat nagmbil penyakit
   - setter disease buat ngubah penyakit
   - addMedicine buat nambahin obat
   - printPatient buat nampilin info pasien dan daftar obat

4. Schedule
   Atribut:
   - string day buat hari jadwal
   - string time buat waktu jadwal
   - string room buat ruangan
   Method:
   - printSchedule buat nampilin jadwal

5. Medicine
   Atribut:
   - string name buat nama obat
   - string dose buat dosis obat
   Method:
   - getter name buat nagmbil nama obat
   - setter name buat ngubah nama obat
   - getter dose buat ngambil dosis obat
   - setter dose buat ngubah dosis obat
   - printMedicine buat nampilin info obat

6. Hospital
   Atribut:
   - string hispitalname buat nama RS
   - List Doctor buat daftar dokter (pake aggregation)
   - List Patients buat daftar pasien (pake aggregation)
   Method:
   - getter hospitalname buat nagmbil nama RS
   - setter hospitalname buat ngubah nama RS
   - addDoctor buat nambahin dokter
   - AddPatient buat nambahin pasien
   - printInfo buat nampilin smua dokter, pasien, jadwal, dan obat


==<< desain >>==
1. Class PERSON sebagai parent class
2. Class DOCTOR dan PATIENT inherit dari PERSON
3. Class DOCTOR USE class SCHEDULE
4. Class PATIENT USE class MEDICINE
5. Class HOSPITAL USE class DOCTOR dan class MEDICINE

Inheritance
- Person sebagai parent class
- Doctor dan Patient extend Person

Composition
- Doctor USE class Schedule untuk jadwal dokter (composition)
- Patient USE class Medicine untuk obat pasien (composition)
- Hospital USE class Doctor dan Patient karena Hospital mengelola kumpulan info Doctor dan Patient. Make aggregasi krn dokter/pasien bisa ada diluar RS

==<< alur >>==
1. program print objek awal
2. program meminta input dari user
3. program print smua objek awal dan objek yang diinput user

==<< dokumentasi >>==

1. CPP

<img width="410" height="828" alt="Screenshot 2025-09-30 160650" src="https://github.com/user-attachments/assets/4c870c56-1e44-4bfc-b516-22640cb36119" />

2. Python

<img width="561" height="655" alt="printawal" src="https://github.com/user-attachments/assets/d9a6bdac-9c65-456f-9a85-721fa216cc22" />

<img width="315" height="318" alt="add" src="https://github.com/user-attachments/assets/46bcbe5a-ebf2-42c3-8c2a-155fe2c28bf6" />

<img width="556" height="854" alt="printsetelahadd" src="https://github.com/user-attachments/assets/7950436b-fcc3-40bb-b57b-fa2253d658bf" />

3. Jawa

<img width="319" height="820" alt="Screenshot 2025-09-30 230141" src="https://github.com/user-attachments/assets/3908cec4-9475-4740-ac51-1e45e3bde541" />
