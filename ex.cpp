/*
Check more details from link below:
http://stackoverflow.com/questions/14122528/why-do-we-say-that-the-call-of-virtual-function-cannot-be-determined-in-compilin#14122618
 * */
#include <iostream>

using namespace std;

struct Base {
    virtual void func() {
        cout << "Base::func()" << std::endl;
    }
};

struct Derived : Base {
    virtual void func() {
        cout << "Derived::func()" << std::endl;
    }
};


int main()
{
    Base *bp = 0;

    string input;
    cin >> input;

    if (input == "base")
        bp = new Base;
    else
        bp = new Derived;

    /* The compiler cannot decide which
       function is called here: */
    bp->func();

    return 0;
}
