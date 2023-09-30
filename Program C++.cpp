#include <iostream>
using namespace std;

int main() {
    // Variabel
    int angka = 5;

    // Tipe Data
    double pecahan = 3.14;

    // For loop
    for (int i = 0; i < 5; i++) {
        cout << "Iterasi for ke-" << i << endl;
    }
    cout<<endl;
    
    // If statement
    if (angka > 0) {
        cout << "Angka positif" << endl << endl;
    } else if (angka < 0) {
        cout << "Angka negatif" << endl;
    } else {
        cout << "Angka nol" << endl;
    }

    // While loop
    int j = 0;
    while (j < 3) {
        cout << "Iterasi while ke-" << j << endl;
        j++;
    }
    cout<<endl;
    
    // Do-while loop
    int k = 0;
    do {
        cout << "Iterasi do-while ke-" << k << endl;
        k++;
    } while (k < 3);
    cout<<endl;

    // Array satu dimensi
    int arrSatuDimensi[5] = {1, 2, 3, 4, 5};
    
    cout << "Isi array satu dimensi: \n";
    for (int i = 0; i < 5; i++) {
        cout << arrSatuDimensi[i] << " ";
    }
    cout << endl << endl;

    // Array multidimensi
    int arrMultiDimensi[2][3] = {{1, 2, 3}, {4, 5, 6}};
    
    cout << "Isi array multidimensi:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arrMultiDimensi[i][j] << " ";
        }
        cout << endl;
    }
        cout<<endl;

    // Input
    int input;
    cout << "Masukkan sebuah angka: ";
    cin >> input;

    // Output
    cout << "Angka yang dimasukkan: " << input << endl;

    // Comment
    // Ini adalah komentar dalam C++
    
    return 0;
}
