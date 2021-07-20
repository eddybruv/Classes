/*Date: 20-07-2021
    by eddybruv
    learning classes*/



//Overloading class constructors
#include <iostream>
using namespace std;

class CRectangle
{
    int width, height;

public:
    CRectangle();
    CRectangle(int, int);
    int area(void) { return (width * height); }
};

//initialising fxn 2
CRectangle::CRectangle()
{
    width = 6;
    height = 5;
}
//fxn 1
CRectangle ::CRectangle(int a, int b)
{
    width = a;
    height = b;
}

int main()
{
    //using fxn 1
    CRectangle rect(3, 2);
    //using function 2
    CRectangle rectb;
    cout << "rect area: " << rect.area() << endl;
    cout << "rectb area: " << rectb.area() << endl;
    return 0;
}
