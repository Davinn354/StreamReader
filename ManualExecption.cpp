#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di prodid TI UMY" << endl;
        //throw 0.5; // melempar sebuah integer maka
        cout << "Pernyataan tidak akan diekesekusi " << endl;
    }
    catch (int a) {
        //blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch(...) {
        /*jika selain integer maka block ini akan dieksekusi*/
        cout << "default Penegecualian diexsekusi" << endl;
    }
    return 0;
}