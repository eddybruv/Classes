/*Date: 20-07-2021
    by eddybruv
    learning classes*/

#include <iostream>
using namespace std;

class CRectangle
{
    int x, y;

public:
    void set_values(int, int);
    int area()
    {
        return (x * y);
    }
};

//method(function), using variable scope to declare fxn
void CRectangle::set_values(int a, int b)
{
    x = a;
    y = b;
}

int main()
{
    //declaring a variable rect
    CRectangle rect;
    rect.set_values(7, 8);
    cout << "area: " << rect.area();
    return 0;
}