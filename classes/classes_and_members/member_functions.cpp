struct Date {
    int d, m, y;
};


void init_date(Date& d, int, int, int);
void add_year(Date& d, int n);
void add_month(Date& d, int n);
void add_day(Date& d, int n);


struct Date {
    int d, m, y;
    void init(int dd, int mm, int yy);
    void add_year(int n);
    void add_month(int n);
    void add_day(int n);
};


Date my_birthday;


void f() {
    Date today;

    today.init(16, 10, 1996);
    my_birthday.init(30,12,1950);

    Date tomorrow = today;
    tomorrow.add_day(1);
}


void Date::init(int dd, int mm, int yy) {
    d = dd;
    m = mm;
    y = yy;
}