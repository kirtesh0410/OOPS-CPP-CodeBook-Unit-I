#include <iostream>
using namespace std;

int add(int, int);

int main() {
    int a = 15, b = 25;

    cout << "Sum = " << add(a, b) << endl;

    return 0;
}

int add(int x, int y) {
    return x + y;
}
