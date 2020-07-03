#include <iostream>
using namespace std;

class Add
{
    int x, y;
    public: 
        void sum(int a, int b)
        {
            x = a;
            y = b;
            cout << x+y << endl;
        }

};

int main()
{
    Add t1;
    t1.sum(3,2);
    return 0;

}