class Date {
    int d, m, y;
    public:
        void init(int dd, int mm, int yy);

        void add_year(int n);
        void add_month(int n);
        void add_day(int n);
};


void Date::add_year(int n){
    y += n;
};