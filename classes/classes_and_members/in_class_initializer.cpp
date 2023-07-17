class Date1 {
    int d, m, y;

    public:
        Date1(int, int, int);
        Date1(int, int);
        Date1(int);
        Date1(const char*);
};


Date2 today;


class Date2 {
    int d{today.d};
    int m{today.m};
    int y{today.y};

       public:
        Date2(int, int, int);
        Date2(int, int);
        Date2(int);
        Date2(const char*);

};