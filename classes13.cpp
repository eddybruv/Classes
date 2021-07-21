/*Date: 20-07-2021
    by eddybruv
    learning classes*/


// constructors and derived classes
#include <iostream>
using namespace std;

class mother {
    public:
        mother ()
            { cout << "mother: no parameters\n"; }
        mother (int a)
            { cout << "mother: int parameter\n"; }
};
class daughter : public mother {
    public:
        daughter (int a)
        { cout << "daughter: int parameter\n\n"; }
};


class son : public mother {
    public:
        son(int a) : mother (a)
        { cout << "son: int parameter\n\n"; }
};


int main () {
daughter cynthia (0);
son daniel(1);
return 0;
}