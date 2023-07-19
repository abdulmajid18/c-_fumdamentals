#include <iostream>
#include <string>
using namespace std;


class GradeBook {
    public:
        void display_message(string course_name) const {
            cout << "Welcome to the grade book for \n" << course_name << "!"
            << endl;
        };
};


int main() {
    GradeBook grade_book;
    grade_book.display_message("Chemistry");
    

    string name_of_course;

    cout << "Please enter the course name " << endl;
    getline(cin, name_of_course);
    cout << endl;

    grade_book.display_message(name_of_course);
}