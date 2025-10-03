# Janji

Saya Zahran Zaidan Saputra dengan NIM 2415429 mengerjakan TP 2 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

# Diagram
<img width="1053" height="623" alt="image" src="https://github.com/user-attachments/assets/e9b5d2bc-a148-4f05-b726-6712fe0e5214" />

# Penjelasan Atribut dan Methods Setiap Class
**1. AnggotaTim (Kelas Induk)**
Atribut:
* idAnggota (String): ID unik untuk setiap anggota.
* nama (String): Nama lengkap asli anggota.
* nickname (String): Nama panggung atau nama dalam game.
* riwayatTurnamen (List): Daftar yang berisi objek-objek RiwayatTurnamen.

Methods:
* __init__(): Constructor untuk inisialisasi atribut dasar.
* add_riwayat(): Method untuk menambahkan objek RiwayatTurnamen ke dalam list.

**2. Pemain (Kelas Anak)**
Atribut:
* role (String): Peran spesifik pemain di dalam game (contoh: "Duelist").
* peringkat (String): Peringkat kompetitif pemain (contoh: "Radiant").
* jumlahMenang (Integer): Total turnamen yang dimenangkan.

Methods:
* __init__(): Constructor untuk inisialisasi semua atribut, termasuk memanggil constructor AnggotaTim.
* Getter & Setter: Untuk semua atribut spesifik Pemain.

**3. Pelatih (Kelas Anak)**
Atribut:
* spesialis (String): Bidang keahlian pelatih (contoh: "Strategic Coach").
* lisensiPelatih (String): Tingkat lisensi atau sertifikasi yang dimiliki.

Methods:
* __init__(): Constructor untuk inisialisasi, termasuk memanggil constructor AnggotaTim.
* Getter & Setter: Untuk semua atribut spesifik Pelatih.

**4. Manajer (Kelas Anak)**
Atribut:
* divisi (String): Divisi yang diurus oleh manajer (contoh: "Operasional").
* levelJabatan (String): Tingkat senioritas (contoh: "Senior", "Junior").
* jumlahMenang (Integer): Jumlah turnamen yang dimenangkan saat ia menjabat.

Methods:
* __init__(): Constructor untuk inisialisasi, termasuk memanggil constructor AnggotaTim.
* Getter & Setter: Untuk semua atribut spesifik Manajer.

**5. TimEsport (Kelas Wadah)**
Atribut:
* namaTim (String): Nama resmi tim.
* divisiGame (String): Game yang ditekuni tim (contoh: "Valorant").
* daftarAnggota (List): Daftar yang berisi objek Pemain, Pelatih, dan Manajer.

Methods:
* __init__(): Constructor untuk inisialisasi.
* add_anggota(): Method untuk menambahkan objek anggota ke dalam list.
* Getter & Setter: Untuk semua atribut di atas.

**6. RiwayatTurnamen (Kelas Komponen)**
Atribut:
* namaTurnamen (String): Nama turnamen yang diikuti.
* tahun (Integer): Tahun turnamen diselenggarakan.
* peringkatJuara (Integer): Peringkat yang diraih (0 jika tidak juara).

Methods:
* __init__(): Constructor untuk inisialisasi.
* Getter & Setter: Untuk semua atribut di atas.


# Penjelasan Desain Program
Desain ini menerapkan konsep Hierarchical Inheritance:

* **Pewarisan (Hierarchical Inheritance)**: Konsep ini diimplementasikan dengan menjadikan `AnggotaTim` sebagai kelas induk tunggal yang diwarisi oleh tiga kelas anak dengan peran berbeda: `Pemain`, `Pelatih`, dan `Manajer`. Ini adalah desain yang logis karena ketiganya adalah jenis `AnggotaTim`, tetapi masing-masing memiliki atribut dan tugas yang spesifik.

# Penjelasan Alur Program

Alur program ini bersifat statis:
1.  **Inisialisasi Data Awal**: Program utama (`main`) dimulai dengan membuat beberapa objek awal secara *hardcode*, seperti objek `Pemain` dan `Pelatih`. Hubungan komposisi juga dibangun di sini (misalnya, `RiwayatTurnamen` ditambahkan ke `Pemain`).
2.  **Membuat Wadah Utama**: Objek-objek anggota tersebut kemudian dimasukkan ke dalam objek `TimEsport`.
3.  **Menampilkan Data "Sebelum"**: Program mencetak seluruh data dari objek `TimEsport`, menampilkan semua anggota dan detailnya secara berjenjang.
4.  **Penambahan Data Statis**: Program kemudian membuat satu objek baru (misalnya, `Manajer`) dan menambahkannya ke dalam objek `TimEsport` yang sudah ada.
5.  **Menampilkan Data "Sesudah"**: Program kembali mencetak seluruh data dari objek `TimEsport` untuk menunjukkan bahwa anggota baru telah berhasil ditambahkan ke dalam daftar.
