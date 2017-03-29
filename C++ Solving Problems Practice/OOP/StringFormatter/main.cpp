#include <iostream>
#include <string>

using namespace std;

class StringFormatter
{
    private:
        string& strToFormat;
        const string& formatPrefix;

    public:
    StringFormatter(string& stringToFormat, const string& formatPrefix):
        strToFormat(stringToFormat), formatPrefix(formatPrefix)
        {
            cout << this->formatPrefix << endl;
        cout << this->strToFormat << endl;
        }

    void format(string insertArr[], int insertArrSize)
    {
        cout << this << endl;
        cout << "formatting" << endl;
        size_t pos = 0;
        int i = 0;

        cout << this->formatPrefix << endl;
        cout << this->strToFormat << endl;

        cout << this->strToFormat.find(this->formatPrefix, pos) << endl;
        while((pos = this->strToFormat.find(this->formatPrefix, pos)) != string::npos) {
             this->strToFormat.replace(pos, this->formatPrefix.length(), insertArr[i]);
             pos += insertArr[i].length();

             //cout << insertArr[i] << endl;
             i++;
        }
    }

    void format(int insertArr[], int insertArrSize);
};

int main()
{
    //example call
    string str = "Dear *:0, Our company *:1 wants to make you a Donation Of *:2 Million *:3 in good faith. Please send us a picture of your credit card";
    StringFormatter formatter(str, "*:");
    string insertArr[] {"Ben Dover", "Totally Legit NonSpam Ltd", "13", "Leva"};
    formatter.format(insertArr, 4);
    cout << str; //should print “Dear Ben Dover, Our company Totally Legit NonSpam Ltd wants to make you a Donation Of 13 Million Leva in good faith. Please send us a picture of your credit card”

    return 0;
}


