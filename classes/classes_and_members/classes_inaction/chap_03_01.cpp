#include <iostream>
using namespace std;


// Grade class definition
class GradeBook {
    public:
        void displayMessage() const {
            cout << "Welcome to the Grade Book!" << endl;
        };
};


int main() {
    GradeBook my_grade_book;
    // GradeBook myGradeBook {};
    my_grade_book.displayMessage();
}