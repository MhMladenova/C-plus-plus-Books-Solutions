#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void copyToClipboard(const string& text, int firstIndex, int lastIndex, vector<string>& clipboard)
{
    while (firstIndex > 0 && isalpha(text[firstIndex]))
    {
        firstIndex--;
    }

    while (lastIndex < text.size() - 1 && isalpha(text[lastIndex]))
    {
        lastIndex++;
    }

    string copied = text.substr(firstIndex, (lastIndex + 1) - firstIndex);

    string word;
    stringstream readStream(copied);

    while(readStream >> word)
    {
        clipboard.push_back(word);
    }
}

void paste(string& text, int clipboardIndex, int pasteIndex, const vector<string>& clipboard)
{
    string pasteString = clipboard[clipboardIndex];

    text.insert(pasteIndex, pasteString);
}

int main()
{
    string text;

    getline(cin, text);

    int n;
    cin >> n;

    //copy 10 20
    //paste 0 1

    vector<string> clipboard;
    for (int i = 0; i < n; i++)
    {
        string operationName;

        cin >> operationName;
        if (operationName == "copy")
        {
            int startIndex, endIndex;
            cin >> startIndex >> endIndex;
            copyToClipboard(text, startIndex, endIndex, clipboard);
        }
        else //if(operation == "paste")
        {
            int clipboardIndex, pasteIndex;
            cin >> clipboardIndex >> pasteIndex;

            paste(text, clipboardIndex, pasteIndex, clipboard);
        }
    }

    cout << text;

    return 0;
}

