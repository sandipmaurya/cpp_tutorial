
// Constructor Overloading

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

    Complex(int k)   // Parameterized Constructor
    {
        a = k;
        //cout << "This is Constructor....\n";
    }
    Complex()    // default Constructor
    {

    }
    
};

int main()
{
    Complex c1(3,4), c2(5), c3; 

    //Complex c1= Complex(3,4), c2 = Complex(5), c3; 
    //Complex c1= Complex(3,4), c2 = 5, c3; 

    return 0;
}