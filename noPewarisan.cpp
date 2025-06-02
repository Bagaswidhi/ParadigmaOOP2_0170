#include <iostream>
using namespace std;

class baseClass final{
    virtual void perkenalan(){
        cout << "Hallo saya Function dari base class" << endl;
    }
};

class derivedClass : public baseClass{
    public:
        void perkenalan() {
            cout << "Hallo saya Function dari derived class" << endl;
        }
};