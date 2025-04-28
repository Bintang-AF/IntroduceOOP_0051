#include <iostream>
using namespace std;

class Mobil
{
public:
    string Nama_Mobil;
    string Tipe_mobil;

    private:
    int harga_mobil;
    public:
    void input_data(){
        cout << "nama mobil = ";
        cin >> Nama_Mobil;
        cout << "masukkan tipe mobil = ";
        cin >> Tipe_mobil;
        cout << "masukkan harga mobil = ";
        cin >> harga_mobil;

    }
    void output_data(){
        cout << "harga mobil = "<< harga_mobil << endl;

    }
};



