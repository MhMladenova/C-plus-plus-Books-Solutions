#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

void prepareWordArr(const string& text, vector<string>& words)
{
    stringstream readStream(text);

    string word;
    string parsedText;
    char letter;

    while(readStream >> word)
    {
        stringstream parceWordStream(word);

        while(parceWordStream >> letter)
        {
            if (isalpha(letter))
            {
                parsedText += letter;
            }
            else
            {
                parsedText += ' ';
            }
        }
        parsedText += ' ';
    }

    stringstream readParsedText(parsedText);

    while(readParsedText >> word)
    {
        words.push_back(word);
    }
}

double calculateAppearance (const int& countSymbols, const int& countAll)
{
    if( countSymbols == 0)
    {
        return 0.00;
    }
    return ((countSymbols * 100) / double(countAll) );
}

bool compareWords(const string wordFromText, const string word, const int p)
{
    if(wordFromText.size() == word.size())
    {
        int similarSymbols = 0;
        for (int i = 0; i < wordFromText.size(); i++)
        {
            if(wordFromText[i] == word[i])
            {
                similarSymbols++;
            }
        }

        double appearance = calculateAppearance(similarSymbols, wordFromText.size());

        if (appearance >= double(p))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}

int main()
{
    string text;
    getline(cin, text);

    vector<string> words;
    prepareWordArr(text, words);

    string wordToCompare;
    cin >> wordToCompare;

    int p;
    cin >> p;

    int compareSuccess = 0;
    for(vector<string>::iterator it = words.begin(); it != words.end(); ++it)
    {

        if(compareWords(*it, wordToCompare, p))
        {
            compareSuccess++;
        }
    }

    cout << compareSuccess;

    return 0;
}
