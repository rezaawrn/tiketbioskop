#include <iostream>
#include <string>
using namespace std;

#define MAX_FILM 5
#define MAX_TIKET 100

struct Film
{
    string judul;
    string jadwal;
    int sisaTiket;
};

Film daftarFilm[MAX_FILM] = {
    {"Civil War", "10:00", 100},
    {"Inside Out 2", "13:00", 100},
    {"Ipar adalah Maut ", "16:00", 100},
    {"Jurnal Risa", "19:00", 100},
    {"Despicable Me 4", "21 : 00 ", 100}};

void tampilkanFilm()
{
    cout << "Daftar Film:\n";
    for (int i = 0; i < MAX_FILM; i++)
    {
        cout << i + 1 << ". " << daftarFilm[i].judul << " - " << daftarFilm[i].jadwal << " - Tiket tersisa: " << daftarFilm[i].sisaTiket << endl;
    }
}