class X {};

struct X {public: /***/}; // in a struct members are public by default


class Date1 {
    int d, m, y; // private by default

    public:
        Date1(int dd, int mm, int yy);
        void add_year(int n);  // add n years
};


struct Date2 {
    private:
    int d, m, y;

    public:
        Date2(int dd, int mm, int yy);
        void add_year(int n);  // add n years
};