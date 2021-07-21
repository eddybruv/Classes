/*Date: 20-07-2021
    by eddybruv
    learning classes*/





//static members in classes
//counts number of objects of the class currently allocated
#include <iostream>
using namespace std;

class CDummy
{
public:
    static int n;
    CDummy() { n++; }
    ~CDummy() { n--; }
};

int CDummy::n = 0;
int main()
{
    CDummy a;
    CDummy b[9];
    CDummy *c = new CDummy;
    cout << a.n << endl;
    delete c;
    cout << CDummy ::n << endl;
    return 0;
}