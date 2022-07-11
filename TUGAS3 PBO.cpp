#include <iostream> 
#include <string>
using namespace std; class
Mahasiswa
{
// Ini enkapsulasi dimana kita dapat mengatur struktur class sesuai dengan kebutuhan
public:
// pada method public artinya class yang berisikan method public dapat diakses diluar dan didalam class
Mahasiswa(string inputNama, string inputJurusan, int inputNIM, int inputSemester)
{
Mahasiswa::nama = inputNama; Mahasiswa::NIM = inputNIM; Mahasiswa::jurusan = inputJurusan; Mahasiswa::semester = inputSemester;
}
void infoMahasiswa()
{
cout << "Nama Mahasiswa : " << Mahasiswa::nama << endl; cout << "NIM : " << Mahasiswa::NIM << endl;
cout << "Semester : " << Mahasiswa::semester << endl; cout << endl;
}

protected:
// pada method protected isi dari method ini tidak dapat diakses dari luar class tapi bisa digunakan oleh class turunannya
string nama;

private:
// method private hanya bisa diakses oleh class itu sendiri bahkan class turunannya tidak dapat mengaksesnya, sebagai contoh method private ini hanya bisa diakses oleh class "mahasiswa"
string jurusan; int NIM;
int semester;
};

class teknikInformatika : public Mahasiswa
// ini adalah contoh kelas turunan dari class mahasiswa (Inheritance)
{
public:
teknikInformatika(string nama, string jurusan, int NIM, int
semester) : Mahasiswa(nama, jurusan, NIM, semester)
{
}
void daftarPraktikum()
// ini adalah contoh dari polymorphism dimana kelas memiliki turunan yg sama tapi memiliki perilaku yang berbeda (disini bertuliskan "Teknik Informatika" karna kelas turunannya bernama "teknikInformatika")
{
cout << nama << " terdaftar sebagai mahasiswa : Teknik Informatika" << endl;
cout << "Daftar Praktikum Paling Lambat 11 April 2022" << endl;
cout << endl;
}
};

class teknikElektro : public Mahasiswa
// ini adalah contoh kelas turunan dari class mahasiswa (Inheritance)
{
public:
teknikElektro(string nama, string jurusan, int NIM, int
semester) : Mahasiswa(nama, jurusan, NIM, semester)
{
}
void daftarPraktikum()
// ini adalah contoh dari polymorphism dimana kelas memiliki turunan yg sama tapi memiliki perilaku yang berbeda (disini bertuliskan "Teknik Elektro" karna kelas turunannya bernama "teknikElektro")
{
cout << nama << " terdaftar sebagai mahasiswa : Teknik Elektro" << endl;
cout << "Daftar Praktikum Paling Lambat 19 April 2022" << endl;
cout << endl;
}
};

int main(int argc, char const *argv[])
{
cout << "--- PEMROGRAMAN BERORIENTASI OBJEK ---" << endl;
cout << "TUGAS 3 !!" << endl; cout << endl;

teknikInformatika ti1("RIO VERANDA", "Teknik Informatika", 19158577, 6);
teknikInformatika ti2("RIO", "Teknik Informatika", 19158579, 6);
teknikInformatika ti3("VERANDA", "Teknik Informatika", 19158580, 6);
ti1.infoMahasiswa(); ti2.infoMahasiswa(); ti3.infoMahasiswa(); ti3.daftarPraktikum();
teknikElektro te1("Merah", "Teknik Elektro", 19190278, 4);
teknikElektro te2("Kuning", "Teknik Elektro", 19190279, 4);
teknikElektro te3("Hijau", "Teknik Elektro", 19190280, 4); te1.infoMahasiswa();
te2.infoMahasiswa(); te3.infoMahasiswa(); te3.daftarPraktikum();

return 0;
}

