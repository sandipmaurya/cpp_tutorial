/*
 * Destructor is an instance member function of a class
 * The name of the destructor is same as the name of a class but preceded by tiled(~) symbol
 * Destructor is never be static
 * Destructor has no return type
 * Destructor takes no arguments(No overloading is possible)
 * It is invoked implicitely when object is going to destroy
 *   
*/

#include <iostream>

using namespace std;
class Complex
{
    private:
    int a, b;

    public:
    ~Complex()
    {
       cout << "Destructor .....";  
    }
};

void fun()
{
    Complex obj;
}


int main()
{
    fun();

    return 0;
}

