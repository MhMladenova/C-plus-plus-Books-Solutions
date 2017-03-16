#include<iostream>
using namespace std;

int main() {
    int a = 5;
    int b = a % 3;

    //a = b return 2, so the condition a = b is true and
    //the program prints equal as an answer
    if (a = b) {
        cout << "equal" << endl;
    } else {
        cout << "not equal" << endl;
    }

    return 0;
}
