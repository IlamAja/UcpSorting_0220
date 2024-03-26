// 1. Harus bisa membedakan bilangan yang terurut dan tidak terurut, kemudian memindahkan bilangan yang tidak urut ke arah depan dibarisan bilangan yang sudah urut.
// 2. Mencari array yang terkecil, lalu tukar array yang terkecil tersebut ke bilangan yang paling depan.
// 3. Cara mengetahui jumlah langkah yang dilakukan adalah dengan cara menghitung secara ber gelombang, misal 0,1,2,3,4,5 ini sama dengan 5 langkah
#include <iostream> //berguna untuk input dan output dalam sebuah codingan
using namespace std; //using namespace berguna agar kita tidak perlu ribet ribet untuk mengetik std ::
int Ilam[20]; //integer berguna untuk bilangan bulat
int n;

void input() { //void sebagai jenis pengembalian fungsi
    while (true) { //while adalah bentuk perulangan yang tidak diketahui
        cout << "masukan banyaknya elemen pada array : "; //cout berguna untuk menampilkan teks
        cin >> n; //cin berguna untuk memasukkan data sesuai dengan perintah
        if (n <= 20) 
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";

        }
    }
    cout << endl;
    cout << "====================" << endl;
    cout << "masukan elemen array" << endl;
    cout << "====================" << endl;

    for (int i = 0; i < n ; i++) { //for berguna untuk pengulangan yang sudah diketahui
        cout << "data ke-" << (i + 1) << ": ";
        cin >> Ilam[i];

    }
}
void insertionSort() { 
    int i, j, temp;

    for (i = 1; i <= n - 1; i++) { 
        temp = Ilam[i]; 

        j = i - 1; 

        while (j >= 0 && Ilam[j] > temp) 
        {
            Ilam[j + 1] = Ilam[j]; 
            j--; 
        }

        Ilam[j + 1] = temp; 
    }
}
void display() {
    cout << endl;
    cout << "=================================" << endl;
    cout << "element array yang telah tersusun" << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++) {
        cout << Ilam[j]; //menampilkan array
        if (j < n - 1) {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;

    cout << "jumlah langkah = " << n - 1 << endl; //menampilkan total angka dari elemen yang benar
    cout << endl;
    cout << endl;
}
int main()
{
    input();
    insertionSort();
    display();
    system("pause");

    return 0; //return mengembalikan nilai function5
    
}