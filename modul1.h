#ifndef MODUL1_H
#define MODUL1_H

#include "ortak.h"

struct KitapDugum {
    Kitap veri;
    KitapDugum* next;
    KitapDugum* prev;
};

struct DuyuruDugum {
    string metin;
    DuyuruDugum* next;
};

extern KitapDugum* kitapBas;
extern KitapDugum* kitapSon;
extern DuyuruDugum* duyuruSon;

//kitap kataloglari
void kitabiBasaEkle(Kitap k);
void kitabiSonaEkle(Kitap k);
bool kitabiArayaEkle(int hedefId, Kitap k);
bool kitabiSil(int id);
void ileriListele();
void geriListele();
void katalogAnalizEt(int sayfaEsigi);

// duyurupanosu 
void duyuruEkle(string metin);
void duyuruListele();

void dosyayaYaz(string dosyaAdi);
void dosyadanOku(string dosyaAdi);

void kitapListesiniTemizle();
void duyuruListesiniTemizle();

void modul1OrnekVeriYukle();
void modul1Menu();

#endif