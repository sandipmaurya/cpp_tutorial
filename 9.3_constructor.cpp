
// Copy Constructor

#include <iostream>

using namespace std;
class Complex
{
    private:
    int a, b;

    public:
    Complex(int x, int y)    // Parameterized Constructor
    {
        a = x;
        b = y;
        //cout << "This is Constructor....\n";
    }

    Complex(int k)
    {
        a = k;
        //cout << "This is Constructor....\n";
    }
    Complex()    // default Constructor
    {

    }

    Complex(Complex &c)    // copy Constructor
    {
       a = c.a;
       b = c.b;
    }
    
};

int main()
{
    Complex c1(3,4), c2(5), c3; 

    Complex c4 = c1; // or Complex c4(c1);    // 

    return 0;
}