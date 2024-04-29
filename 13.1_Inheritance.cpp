#include <iostream>

using namespace std;

class Parent{
    public:
    int a;
};

class Child : public Parent{
    public:
    int b;
};

int main()
{
    Child obj;
    obj.a = 10;
    obj.b = 12;

    cout << "Child b is: " << obj.b << '\n';
    cout << "Parent a is: " << obj.a << '\n';
    
}