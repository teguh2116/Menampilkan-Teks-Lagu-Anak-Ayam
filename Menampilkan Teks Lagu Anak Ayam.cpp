#include <iostream>
using namespace std;

int main ()
{
    int x,jumlah_anak;
    cout<< " Masukan Jumlah Anak Ayam :";
    cin>> jumlah_anak;
    cout<< " Mari bernyanyi "<<jumlah_anak<<endl;
    cout<< " MULAI !!! "<<endl;
    for (x=jumlah_anak;x>0;x--)
    {
        if (x>1)
            cout<< " Anak Ayam Turun : "<<x<< " Mati Satu Tinggal :"<<x-1<<endl;
        else if (x=1)
            cout<< " Anak Ayam turun < 1 Mati Satu Tingal Induknya"<<endl;
    }
}
