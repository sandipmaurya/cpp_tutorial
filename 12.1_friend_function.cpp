
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
        cout<< "a: "<< a << " b: " << b;
    }
    friend void fun(Complex);
};

void fun(Complex c)
{
    cout << "\nSum is: " << c.a + c.b;
}

int main()
{
    Complex c1;
    c1.setData(4,5);
    c1.showData();
    fun(c1);

    return 0;

}