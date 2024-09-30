#include <iostream>
using namespace std;

class Base {
public:
    virtual void pureVirtual() = 0; 
};

class Derived : public Base {
public:
    void pureVirtual() override {
        cout << "Implemented pure virtual function" << endl;
    }
};

int main() {
    Derived d;
    d.pureVirtual();
    return 0;
}
