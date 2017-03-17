#include<iostream>
using namespace std;

int main() {
    char text[16] = {'C', '+', '+', ' ', 'P', 'r', 'o', 'g', 'r', 'a', 'm', 'm', 'i', 'n', 'g', '\0'};
    char sameText[] = {'C', '+', '+', ' ', 'P', 'r', 'o', 'g', 'r', 'a', 'm', 'm', 'i', 'n', 'g', 0};
    char sameTextAgain[] = "C++ Programming";
    char sameTextYetAgain[16] = "C++ Programming";

    cout << text << endl;
    cout << sameText << endl;
    cout << sameTextAgain << endl;
    cout << sameTextYetAgain << endl;

    //TIP: For comparing visually, surround what is being printed with some symbols, so that it is for sure there isn't any blank-space difference
    //cout << '|' << text << '|' << endl;
    //cout << '|' << sameText << '|' << endl;
    //cout << '|' << sameTextAgain << '|' << endl;

    cin >> text;
    cout << text;

    return 0;
}
