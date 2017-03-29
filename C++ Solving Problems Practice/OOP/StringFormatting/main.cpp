#include <iostream>
#include <string>
#include <sstream>

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
        }

    void format(string insertArr[], int insertArrSize)
    {
        size_t pos = 0;
        int i = 0;

        while((pos = this->strToFormat.find((this->formatPrefix + intToString(i)), pos)) != string::npos) {
             this->strToFormat.replace(pos, this->formatPrefix.length()+1, insertArr[i]);

             pos += insertArr[i].length();
             i++;
        }
    }

    void format(int insertArr[], int insertArrSize)
    {
        size_t pos = 0;
        int i = 0;

        while((pos = this->strToFormat.find((this->formatPrefix + intToString(i)), pos)) != string::npos) {
             this->strToFormat.replace(pos, this->formatPrefix.length()+1, intToString(insertArr[i]));

             pos += intToString(insertArr[i]).length();
             i++;
        }
    }

    private:
    string intToString (int a)
    {
        stringstream temp;
        temp<<a;
        return temp.str();
    }
};

int main()
{
    //example call
    string str = "Dear *:0, Our company *:1 wants to make you a Donation Of *:2 Million *:3 in good faith. Please send us a picture of your credit card";
    const string prefix = "*:";
    StringFormatter formatter(str, prefix);

    //string insertArr[] {"Ben Dover", "Totally Legit NonSpam Ltd", "13", "Leva"};
    int insertArr[] {123, 456, 789, 321};
    formatter.format(insertArr, 4);
    cout << str; //should print “Dear Ben Dover, Our company Totally Legit NonSpam Ltd wants to make you a Donation Of 13 Million Leva in good faith. Please send us a picture of your credit card”

    return 0;
}


