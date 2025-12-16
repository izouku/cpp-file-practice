#include <iostream>
using namespace std;

class Tracker {
public:
    Tracker() {
        cout << "Constructor called" << endl;
    }

    ~Tracker() {
        cout << "Destructor called" << endl;
    }
};