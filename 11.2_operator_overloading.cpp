// Unary operator

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
        cout << "\na= " << a << " b= " << b;
    }
 
    Complex operator -() // Any symbol can be used as a function name, if it is a valid operator in c language, if it is preceded by operator keyword.
    {
        Complex temp;
        temp.a = -a;
        temp.b = -b;

        return (temp);
    }
 
};

int main()
{

    Complex c1, c2;

    c1.setData(3,4);

   
    //c2= c1.operator-();
    c2 = -c1;
    c2.showData();
 
    return 0;
}