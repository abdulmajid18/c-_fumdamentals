void f(int x)
{
    int z = x + 7;
}

int g(int x) // g is global; x is local to g
{
    int f = x + 2; // f is local
    return 2 * f;
}

int max(int a, int b) // max is global; a and b are local
{
    return (a >= b) ? a : b;
}

int abs(int a) // not max()’s a
{
    return (a < 0) ? -a : a;
}