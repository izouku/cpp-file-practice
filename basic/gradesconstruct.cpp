#include <iostream>
#include <cstdlib>   // for atoi
using namespace std;

class GradesConstruct {
private:
    int grade;

public:
    GradesConstruct(int g) : grade(g) {}

    void displayGrade() const {
        if (grade >= 90) cout << "You got an A!" << endl;
        else if (grade >= 80) cout << "You got a B!" << endl;
        else if (grade >= 70) cout << "You got a C!" << endl;
        else if (grade >= 60) cout << "You got a D!" << endl;
        else cout << "You failed!" << endl;
    }
};

int main(int argc, char* argv[]) {
    int grade;

    if (argc >= 2) {
        // CLI argument provided
        grade = atoi(argv[1]);
    } else {
        // Interactive input
        cout << "Enter your grade (0-100): ";
        cin >> grade;
    }

    GradesConstruct studentGrade(grade);
    studentGrade.displayGrade();

    return 0;
}