/*Date: 20-07-2021
    by eddybruv
    learning classes*/



//constructors


#include <iostream>
using namespace std;
class CRectangle
{
    int width, height;

public:
    CRectangle(int, int);
    int area() { return (width * height); }
};

CRectangle::CRectangle(int a, int b)
{
    width = a;
    height = b;
}

int main()
{
    CRectangle rect(6, 8);
    CRectangle rectb(3, 2);
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    return 0;
}