#include <iostream>
using namespace std;

class A {
public:
    void methodA() {
        cout << "Method A" << endl;
    }
};

class B {
public:
    void methodB() {
        cout << "Method B" << endl;
    }
};

class C : public A, public B {};

int main() {
    C obj;
    obj.methodA();
    obj.methodB();
    return 0;
}
