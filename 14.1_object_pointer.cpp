#include <iostream>

using namespace std;

class Box{

    private:
    int l,b,h;

    public:
    void setDimensions(int x, int y, int z)
    {
        l = x;
        b = y;
        h = z;
    }

    void showDimension()
    {
        cout << "\nl " << l << ", b " << b << ", h " << h;
    }

};

int main()
{
    Box *p, smallBox;

    p = &smallBox;
    p->setDimensions(55,66,33);
    p->showDimension();
}