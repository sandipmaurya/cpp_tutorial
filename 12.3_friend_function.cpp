#include <iostream>

using namespace std;


class Complex
{
    private:
    int a, b;

    public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }

    void showData()
    {
        cout << "\na=" << a << " b=" << b;
    }

    friend Complex operator +(Complex c1, Complex c2)
    {
        Complex temp;
        temp.a = c2.a+c1.a;
        temp.b = c2.b+c1.b;
        return(temp);
    }

};


int main()
{
    Complex c1, c2, c3;

    c1.setData(4,5);
    c2.setData(5,6);
    c3 = c1 + c2;  // c3 = operator+(c1 + c2)
    c3.showData();

    return 0;
}