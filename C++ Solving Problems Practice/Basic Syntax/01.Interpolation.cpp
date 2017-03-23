#include <iostream>
using namespace std;

int* getSamples(int data[], int dataSize, int numSamples)
{
    int* samples = new int[numSamples];

    if(numSamples != 0)
    {
        double step = dataSize / (double)numSamples;

        int posInResult = 0;
        for (double pos = 0; pos < dataSize; pos += step)
        {
            int actualPos = (int)pos;

            samples[posInResult] = data[actualPos];
            posInResult++;
        }
    }

    return samples;
}

bool assertArraysEquals(int expectedResult[], int expectedResultSize, int* actualResult, int actualResultSize)
{
    bool actualEqualsExpected = true;
    cout << actualEqualsExpected << endl;

    for ( int i = 0; i < expectedResultSize; i++)
    {
        actualEqualsExpected &= actualResult[i];
        cout << actualEqualsExpected << endl;
    }

    return actualEqualsExpected;
}

bool test() {
    int testData[] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int* actualResult = getSamples(testData, 13, 5);
    int exptectedResults[] {0, 2, 5, 7, 10};

    bool test1 = assertArraysEquals(exptectedResults, 5, actualResult, 5);

}

int main()
{
    int testData[] {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int* samples = getSamples(testData, 13, 5);

    for(int i = 0; i < 5; i++)
    {
        cout << samples[i] << endl;
    }

    bool testing = test();
    cout << testing << endl;

    delete[] samples;
    return 0;
}
