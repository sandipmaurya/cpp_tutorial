// Increment operator

#include <iostream>

using namespace std;
class Integer
{
    private:
    int x;
    public:
    void setData(int a)
    {
        x = a;
    }

    void showData()
    {
        cout << "\nx = " << x;
    }

    Integer operator ++() // Pre increment
    {
        Integer temp;
        temp.x = ++x;

        return (temp);
    }

    Integer operator ++(int)   // post increment
    {
        Integer temp;
        temp.x = x++;
        
        return (temp);
    }
 
};

int main()
{

    Integer i1, i2;

    i1.setData(3);

    i1.showData();

    i2 =  ++i1;     // i2 = i1.operator++();

    //i2 =  i1++;     // i2 = i1.operator++();
    i1.showData();

    i2.showData();
 
    return 0;
}