# Gorev Dagilimi

**Proje:** Kampus Kutuphanesi ve Ogrenci Hizmetleri Otomasyonu
**Ders:** BLP 205 - Veri Yapilari (2026-2027 Guz Donemi)

| No | Ad Soyad | Ogrenci No | GitHub | Ana Sorumluluk |
| :-- | :-- | :-- | :-- | :-- |
| 1 | Yavuz Buğra Sorguç | 202507012024 | henwaffles | Modul 1 - Bagli Listeler ve Dosya Islemleri |
| 2 | Ahmet Baran Demir | 202507012068 | | Modul 2 - Yigin (Stack) ve Kuyruk (Queue) |
| 3 | Rızkullah Yasin Balkış | 202507012034 | | Modul 3 - Siralama ve Arama Algoritmalari |
| 4 | Mert Tunç Pervane | 202507012049 |Odlizz | Modul 4 - Graf ve Kampus Rota Analizi |

Fonksiyon isimleri plandir; kod yazildikca gercek adlarla guncellenecektir.

## 1. Yavuz Buğra Sorguç - Modul 1

- **Dosyalar:** `ortak.h`, `modul1.h`, `modul1.cpp`
- **Yazacagi fonksiyonlar:** Cift yonlu bagli listede `kitapBasaEkle`, `kitapSonaEkle`, `kitapArayaEkle`, `kitapSil`, `ileriListele`, `geriListele`, `katalogAnaliz`; dairesel listede `duyuruEkle`, `duyuruListele`; `dosyayaYaz`, `dosyadanOku` ve liste bellek temizleme.
- **Test edecegi bolumler:** Bos liste, basa/sona/araya ekleme, ilk/orta/son dugum silme, ileri-geri listelemenin ters sirada ayni kayitlari gostermesi, dairesel listenin bir tur sonra durmasi, dosya yazma/okuma.
- **Ortak calismalar:** `Kitap` yapisinin `ortak.h` icinde tanimlanmasi ve Modul 3 ile paylasimi.

## 2. Ahmet Baran Demir - Modul 2

- **Dosyalar:** `modul2.h`, `modul2.cpp`, `main.cpp`
- **Yazacagi fonksiyonlar:** Bagli liste tabanli yiginda `stackPush`, `stackPop`, `stackPeek`, `stackListele`; kuyrukta `queueEnqueue`, `queueDequeue`, `queueListele`; yigin ve kuyruk bellek temizleme.
- **Test edecegi bolumler:** Bos yigin ve bos kuyruk durumlari, LIFO ve FIFO sirasinin korunmasi.
- **Ortak calismalar:** Ana menu ve modullerin menuye baglanmasi, gecersiz secim kontrolu, baslangic ornek verileri, cikista tum bellegin temizlenmesi.

## 3. Rızkullah Yasin Balkış - Modul 3

- **Dosyalar:** `modul3.h`, `modul3.cpp`
- **Yazacagi fonksiyonlar:** `listedenDiziyeAktar`, `bubbleSortSayfa`, `insertionSortSayfa`, `quickSortID`, `binarySearchID` (karsilastirma, takas, kaydirma ve adim sayaclari ile).
- **Test edecegi bolumler:** Siralama sonuclarinin ve sayaclarin dogrulugu, Binary Search'un bulunan ve bulunamayan ID ile denenmesi.
- **Ortak calismalar:** Modul 1 katalog verisiyle entegrasyon, `TEST_SENARYOLARI.md` dosyasinin hazirlanmasi.

## 4. Mert Tunç Pervane - Modul 4

- **Dosyalar:** `modul4.h`, `modul4.cpp`
- **Yazacagi fonksiyonlar:** Kampus grafi icin `komsulukMatrisiOlustur`, `matrisYazdir`, `bfsGezinme`, `dfsGezinme`, `dijkstraEnKisaYol` (mesafe ve rota yazdirma).
- **Test edecegi bolumler:** Matris goruntuleme, farkli baslangic dugumleriyle BFS/DFS, en az bir Dijkstra rota sorgusu, gecersiz bina numarasi.
- **Ortak calismalar:** Program ekran goruntuleri ve README'nin derleme/kullanim bolumleri.
