#include "modul4.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

const int BIRIM_SAYISI = 6;

string birimAdlari[BIRIM_SAYISI];
int komsulukMatrisi[BIRIM_SAYISI][BIRIM_SAYISI];

void komsulukMatrisiOlustur() {
    birimAdlari[0] = "Merkez Kutuphane";
    birimAdlari[1] = "MYO Bilgisayar Laboratuvari";
    birimAdlari[2] = "Muhendislik Binasi";
    birimAdlari[3] = "Ogrenci Isleri";
    birimAdlari[4] = "Yemekhane ve Sosyal Alan";
    birimAdlari[5] = "Konferans Salonu";

    int baslangicMatrisi[BIRIM_SAYISI][BIRIM_SAYISI] = {
        {  0, 120, 200, 150,   0,   0},
        {120,   0,  90,   0, 250,   0},
        {200,  90,   0,   0,   0, 180},
        {150,   0,   0,   0, 100, 300},
        {  0, 250,   0, 100,   0, 110},
        {  0,   0, 180, 300, 110,   0}
    };

    for (int i = 0; i < BIRIM_SAYISI; i++) {
        for (int j = 0; j < BIRIM_SAYISI; j++) {
            komsulukMatrisi[i][j] = baslangicMatrisi[i][j];
        }
    }
}

void matrisiYazdir() {
    cout << "\n--- KAMPUS BIRIMLERI ---\n";
    for (int i = 0; i < BIRIM_SAYISI; i++) {
        cout << (i + 1) << ". " << birimAdlari[i] << endl;
    }

    cout << "\n--- KOMSULUK MATRISI (Mesafeler metre, 0 = dogrudan yol yok) ---\n\n";

    cout << setw(6) << " ";
    for (int j = 0; j < BIRIM_SAYISI; j++) {
        cout << setw(6) << (j + 1);
    }
    cout << endl;

    cout << "      ------------------------------------\n";

    for (int i = 0; i < BIRIM_SAYISI; i++) {
        cout << setw(4) << (i + 1) << " |";
        for (int j = 0; j < BIRIM_SAYISI; j++) {
            cout << setw(6) << komsulukMatrisi[i][j];
        }
        cout << endl;
    }
    cout << endl;
}