#include <fstream>
#include <iostream>
#include<string>
using namespace std;

int main() {
    string baris;

    // membuka file dalam mode menulis
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open("contojfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    //unlimited loop untuk menulis
    while (true) {
        cout << "- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika ada memasukan karakter q
        if (baris == "q") break;
        // menulis dan memasukan nilai dari 'baris' kedalam file
        outfile << baris << endl;
    }
}