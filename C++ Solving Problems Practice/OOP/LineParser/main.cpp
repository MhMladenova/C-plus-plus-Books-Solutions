#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

typedef int DataTypeInt;
typedef string DataTypeString;
typedef char DataTypeChar;

class LineParser
{
    private:
    string stringInput;

    public:
    LineParser(const string& str) :
        stringInput(str)
        {
        }

    vector<DataTypeInt>* getNumbers() const
    {
        vector<DataTypeInt>* numbers = new vector<DataTypeInt>;

        for (int i = 0; i < this->stringInput.size(); i++)
        {
            char check = stringInput[i];
            if('0' <= check && check <= '9' )
            {
                numbers->push_back(check);
            }
        }

        return numbers;
    }

    vector<DataTypeString>* getStrings() const
    {
        vector<DataTypeString>* strings = new vector<DataTypeString>;

        stringstream readStream(this->stringInput);
        string word;

        while(readStream >> word)
        {
            strings->push_back(word);
        }

        return strings;
    }

    vector <DataTypeChar>* getChars() const
    {
        vector<DataTypeChar>* chars = new vector<DataTypeChar>;

        for (int i = 0; i < this->stringInput.size(); i++)
        {
            char check = stringInput[i];

            if (!isspace(check))
            {

                chars->push_back(check);
            }
        }


        return chars;
    }


    void changeLine(const string& str)
    {
        this->stringInput = str;
    }
};

void testGetNumbers(LineParser& parser)
{
    vector<DataTypeInt>* numbers = parser.getNumbers();

    for (int i=0; i < numbers->size(); i++)
    {
        cout << "numbers[" << i << "] = " << (char)(numbers->at(i)) << endl;
    }

    delete numbers;
}

void testGetStrings(LineParser& parser)
{
    vector<DataTypeString>* strings = parser.getStrings();

    for (int i=0; i < strings->size(); i++)
    {
        cout << "strings[" << i << "] = " << (strings->at(i)) << endl;
    }

    delete strings;
}

void testGetChars(LineParser& parser)
{
    vector<DataTypeChar>* numbers = parser.getChars();

    for (int i=0; i < numbers->size(); i++)
    {
        cout << "numbers[" << i << "] = " << (char)(numbers->at(i)) << endl;
    }

    delete numbers;
}

int main()
{
    //string text;
    //getline(cin, text);

    //Inputs for testing purposes of getNumbers:
    //string text = "123321 456";

    //Inputs for testing purposes of getStrings:
    //string text = "Test if getStrings is working fine";
    //string text = "";

    //Inputs for testing purposes of getChars:
    string text = "Test if getChars is working fine";
    //string text = "";

    LineParser parser(text);

    //testGetNumbers(parser);
    //testGetStrings(parser);
    testGetChars(parser);

    parser.changeLine("Let's change the line");
    testGetStrings(parser);

    return 0;
}
