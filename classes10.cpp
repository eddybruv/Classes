/*Date: 20-07-2021
    by eddybruv
    learning classes*/



//friend class
// friendship doesnt work in the both dxns as CSquare cant access,
//the private and protected members of CRectangle.
//friendship is not transitive.
#include <iostream>
using namespace std;

class CSquare; //necessary because CSquare is declared as a parameter in convert()

class CRectangle
{
    int width, height;

public:
    int area() { return (width * height); }
    void convert(CSquare a);
};

class CSquare  //This is declared early because CSquare is used as a parameter in CRectangle.
{
    int side;

public:
    void set_side(int a)
    {
        side = a;
    }
    friend class CRectangle;
};

void CRectangle ::convert(CSquare a)
{
    width = a.side;
    height = a.side;
}

int main()
{
    CSquare sqr;
    CRectangle rect;
    sqr.set_side(4);
    rect.convert(sqr);
    cout << rect.area();
    return 0;
}