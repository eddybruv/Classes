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
    int area() { return (x * y); }
};

void CRectangle::set_values(int a, int b)
{
    x = a;
    y = b;
}

int main()
{
    CRectangle rect, rectb;
    rect.set_values(5, 7);
    rectb.set_values(9, 9);
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    return 0;
}