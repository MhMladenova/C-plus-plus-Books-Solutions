#include<iostream>
using namespace std;

int main() {
    //Every value different from false or 0 is true
    bool initializedWithKeyword = true;
    bool initializedWithKeywordCtor(false);
    bool initializedWithZero = 0;
    bool initializedWithNegativeNumber(-17);

    cout << initializedWithKeyword << endl
        << initializedWithKeywordCtor << endl
        << initializedWithZero << endl
        << initializedWithNegativeNumber << endl;

    return 0;
}
