/*Date: 20-07-2021
    by eddybruv
    learning classes*/



//vectors: overloading operators
#include <iostream>
using namespace std;

class CVector
{
public:
    int x, y;
    //CVector(){};                 //This is done to allow the declaration of "CVector c" because it has no parameters.
    CVector (){ x = 0; y = 0; };  //Tis can is preferable used in place of the constructor above.
    CVector(int, int);           //function name CVector(Constructor).
    CVector operator+(CVector);  //function returns Cvector.
};

CVector::CVector(int a, int b)
{
    x = a;
    y = b;
}
CVector CVector::operator+(CVector param)
{
    CVector temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return (temp);
}

int main()
{
    CVector a(3, 1);
    CVector b(1, 2);
    CVector c;
    //c = a + b;
    c = a.operator+ (b);
    cout << c.x << "," << c.y;
    return 0;
}