#include <iostream>
using namespace std;

class seseorang{
    public:
    // virtual void pesan() = 0; // Pure virtual function
    virtual void pesan() {
        cout << "Pesan dari seseorang" << endl;
    }
};

class joko : public seseorang{
    public :
    void pesan() {
        cout << "Pesan dari joko" << endl;
    }
};

class lia : public seseorang{
    public :
    void pesan() {
        cout << "Pesan dari lia" << endl;
    }
};

int main(){
    seseorang* obyek;
    joko a;
    lia b;

    obyek = &a; // Memberi nilai objek dengan alamat objek dari class joko
    obyek->pesan(); // Memanggil fungsi pesan() dari class joko
    obyek = &b; // Memberi nilai objek dengan alamat objek dari class lia
    obyek->pesan(); // Memanggil fungsi pesan() dari class lia
}