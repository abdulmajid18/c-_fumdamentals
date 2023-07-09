class X
{
public:
    int m; // data member
    int mf(int v)
    {
        int old = m;
        m = v;
        return old;
    } // function memeber
};
