#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int age;

    void show() {
        cout << name << " " << age << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Rahul";
    s1.age = 21;

    s1.show();

    return 0;
}
