#include <iostream>

using namespace std;

class Parent{
    private:
    int a;

    protected:
    void setValue(int x)
    {
        a = x;
    }

    public:
    void printValue()
    {
        cout << "Parent Member (Private) a is "  << a << "\n";
    }
};

class Child : public Parent{
    public:

    void setData(int y)
    {
        setValue(y);
    }
};

int main()
{
    Child obj;
    obj.setData(10);
    obj.printValue();
}