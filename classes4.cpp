/*Date: 20-07-2021
    by eddybruv
    learning classes*/


//constructors and destructors
#include <iostream>
using namespace std;

class CRectangle
{
    //using pointers
    int *width, *height;

public:
    CRectangle(int, int);
    //initialise the destructor
    ~CRectangle();
    int area() { return (*width * *height); }
};

CRectangle::CRectangle(int a, int b)
{
    width = new int;
    height = new int;
    *width = a;
    *height = b;
}

//creating the destructor function
CRectangle ::~CRectangle()
{
    delete width;
    delete height;
}
int main()
{
    CRectangle rect(4, 8), rectb(5, 9);
    cout << "rect area : " << rect.area() << endl;
    cout << "rectb area : " << rectb.area() << endl;
    return 0;
}