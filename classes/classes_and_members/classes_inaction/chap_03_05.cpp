#include <iostream>
#include <string>
using namespace std;


class GradeBook {
    public:
        void set_course_name(string name) {
            course_name = name;
        };

        string get_course_name() const {
            return course_name;
        };

        void display_message() const {
            cout << "Welcome to the grade book for\n" << course_name << "!"
            << endl;
        };

    private:
        string course_name;
};


int main( ) {
    string course_name;
    GradeBook grade_book;


    cout << "Initial course name is: " << grade_book.get_course_name()
        << endl;

    cout << "\nPlease enter the course name:" << endl;
    getline(cin, course_name);
    grade_book.set_course_name(course_name);

    cout << endl;
    grade_book.display_message();
    
}