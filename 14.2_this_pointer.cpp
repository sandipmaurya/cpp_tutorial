
#include <iostream>

using namespace std;

class Box{

    private:
    int l,b,h;

    public:
    void setDimensions(int l, int b, int h)
    {
        this->l = l;
        this->b = b;
        this->h = h;
    }

    void showDimension()
    {
        cout << "\nl " << l << ", b " << b << ", h " << h;
    }

};

int main()
{
    Box smallBox;

    
    smallBox.setDimensions(55,66,33);
    smallBox.showDimension();
}