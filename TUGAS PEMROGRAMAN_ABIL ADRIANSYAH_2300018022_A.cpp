#include <iostream>
#include <iomanip>
using namespace std;



int main()
{
	int n;
    cout << "------------------------------------------------------"<< endl; 
    cout << "|                TUGAS PEMROGRAMAN                   | "<< endl;
    cout << "------------------------------------------------------"<< endl; 
    cout << "|Nama : Abil Adriansyah                               |" <<endl;
    cout << "|NIM  : 2300018022                                    |" <<endl;
    cout << "------------------------------------------------------"<< endl; 
	cout <<"Masukkan Jumlah Kotak: ";
    cin>> n;

    while (n < 0) {
        cout << "\n Jumlah Kotak Tidak Valid, Masukkan Jumlah Kotak : ";
        cin >> n;
    }

    for (int i = 0; i <= (n*n); i++) {
        for (int j = 0; j <= (n*n); j++) {
            if (i == 0 || (i % n == 0) || (j == 0) || (j % n == 0)) {
                cout <<setw(2) << "~";
            } else {
                cout <<setw(2) << " ";
            }
        }
        cout << '\n';
    }
    return 0;
}
