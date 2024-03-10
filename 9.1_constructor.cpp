
/*
    Constructor is a member  function of aclass.
    The name of cinstructor is same as the name of the class.
    It has no return type, so cant use return keyword.
    it must be an instance member function, that is, it can never be static.
    Constructor is implicity invoked when an object is created.
    Constructor is used to solve problem of initialization.

 */

#include <iostream>


using namespace std;
class Complex
{
    private:
    int a, b;

    public:
    Complex()
    {
        cout << "This is Constructor....\n";
    }
};

int main()
{
    Complex c1, c2;   // constructor will be called two times

    return 0;
}