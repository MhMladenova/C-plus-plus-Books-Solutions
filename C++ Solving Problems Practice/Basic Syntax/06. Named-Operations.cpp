#include <iostream>
#include <sstream>
#include <string>

using namespace std;

string operationsArr[4];

string intToString (int a)
{
    ostringstream temp;
    temp<<a;
    return temp.str();
}

int countSpacesInStr( const string& input );

void initializeArr(int* arr, const string& arrInput);

void defineOperationsName(string* opeArr, int p);

int opeSum(const int* arr, const int& startIndex, const int& endIndex);

int opeAvg(const int* arr, const int& startIndex, const int& endIndex);

int opeMin(const int* arr, const int& startIndex, const int& endIndex);

int opeMax(const int* arr, const int& startIndex, const int& endIndex);

void executeOperation(string opeName, int startIndex, int endIndex, string& resultOutput, const int* arr);

int makeCalc(int index, int startIndex, int endIndex, const int* arr);

int main()
{
    string arrInput;

    getline(cin, arrInput);

    int n = countSpacesInStr(arrInput) + 1;

    int arr[n] = {0};

    initializeArr(arr, arrInput);

    int p;
    cin >> p;

    defineOperationsName(operationsArr, p);

    string opeName;
    int startIndex;
    int endIndex;

    int numOperations = 0;
    string resultOutput = "";

    do
    {
        cin >> opeName;
        if (opeName != "end")
        {
            cin >> startIndex >> endIndex;
            executeOperation(opeName, startIndex, endIndex, resultOutput, arr);
            numOperations++;
        }
    }
    while (opeName != "end");

    resultOutput = resultOutput.substr(0, resultOutput.size()-1);

    cout << "[" << numOperations << "]{" << resultOutput << "}" << endl;

    return 0;
}

void executeOperation(string opeName, int startIndex, int endIndex, string& resultOutput, const int* arr)
{
    string resultOpe = opeName + "(" + intToString(startIndex) + "," + intToString(endIndex) + ")=";
    int opeIndex = 0;
    for (int i = 0; i < 4; i++)
    {
        if (operationsArr[i] == opeName)
        {
            opeIndex = i;
            break;
        }
    }

    resultOutput += resultOpe + intToString(makeCalc(opeIndex, startIndex, endIndex, arr)) + ",";
}

int makeCalc(int index, int startIndex, int endIndex, const int* arr)
{
    if (index == 0)
    {
        return opeSum(arr, startIndex, endIndex);
    }
    if (index == 1)
    {
        return opeAvg(arr, startIndex, endIndex);
    }
    if (index == 2)
    {
        return opeMin(arr, startIndex, endIndex);
    }
    if (index == 3)
    {
        return opeMax(arr, startIndex, endIndex);
    }
}

int countSpacesInStr( const string& input )
{
	int iSpaces = 0;

	for (int i = 0; i < input.size(); ++i)
		if (input[i] == ' ') ++iSpaces;

	return iSpaces;
}

void initializeArr(int* arr, const string& strInput)
{
    stringstream arrStream(strInput);

    int number;
    int i = 0;

    while (arrStream >> number)
    {
        arr[i] = number;
        i++;
    }
}

void defineOperationsName(string* opeArr, int p)
{
    string opeName;
    int opeIndex;
    int i = 0;

     while (i < p)
    {
        cin >> opeName;
        cin >> opeIndex;

        opeArr[opeIndex] = opeName;
        i++;
    };
}

int opeSum(const int* arr, const int& startIndex, const int& endIndex)
{
    int sum = 0;

    for (int i = startIndex; i < endIndex; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int opeAvg(const int* arr, const int& startIndex, const int& endIndex)
{
    int sum = 0;
    int num = 0;

    for (int i = startIndex; i < endIndex; i++)
    {
        sum += arr[i];
        num++;
    }

    return sum / num;
}

int opeMin(const int* arr, const int& startIndex, const int& endIndex)
{
    int minVal = arr[startIndex];

    for (int i = startIndex + 1; i < endIndex; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
        }
    }

    return minVal;
}

int opeMax(const int* arr, const int& startIndex, const int& endIndex)
{
    int maxVal = arr[startIndex];

    for (int i = startIndex + 1; i < endIndex; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
        }
    }

    return maxVal;
}
