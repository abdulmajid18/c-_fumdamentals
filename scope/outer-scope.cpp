#include <vector>
using namespace std;

int max(int a, int b) // max is global; a and b are local
{
    return (a >= b) ? a : b;
}

int abs(int a) // not max()’s a
{
    return (a < 0) ? -a : a;
}

class My_vector
{
    vector<int> v; // v is in class scope

public:
    int largest()
    {
        int r = 0; // r is local
        for (int i = 0; i < v.size(); ++i)
            r = max(r, abs(v[i]));
        return r;
    }
    // no r here
};
// no v here

int x; // global variables---- avoid those where you can
int y;

int f()
{
    int x; // local variabl, hides the global x
    x = 7; // the local x

    {
        int x = y;
        ++x;
    }

    ++x;
    return x;
}