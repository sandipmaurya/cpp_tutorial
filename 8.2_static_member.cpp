#include <iostream>


using namespace std;
class Account
{
    private:
    int balance;             // instance member variable
    static float roi;        //static member variable / class variable

    public:
    void setBalance(int b)
    {
        balance = b;
    }

    static void setRoi(float r)   // static member function
    {
        roi = r;
    }
};

float Account :: roi = 3.4;

int main()
{
    Account a1, a2;
    a1.setRoi(4.5);
    Account :: setRoi(5.6);

    return 0;
}