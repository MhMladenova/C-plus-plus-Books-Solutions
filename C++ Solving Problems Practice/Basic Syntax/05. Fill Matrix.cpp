#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

char** createMatrix(int rows, int cols)
{
    string matrixData;
    string rowData;
    int rowsInput = 0;
    while (rowsInput <= rows)
    {
        getline(cin, rowData);
        matrixData += rowData;
        matrixData += ' ';
        rowsInput++;
    }

    stringstream readMatrix(matrixData);
    vector<char> matrixDataList;
    char symbol;
    while (readMatrix >> symbol)
    {
        matrixDataList.push_back(symbol);
    }

    int i = 0;

    //allocation for two dimensional array
    char** matrix = new char*[rows];
    for(int i = 0; i < rows; ++i)
    {
        matrix[i] = new char[cols];
    }

    for( int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            matrix[row][col] = matrixDataList[i];
            i++;
        }
    }

    return matrix;
}

int main()
{
    int rows, cols;
    cin >> rows >> cols;

    char** matrix = createMatrix(rows, cols);

    char fillChar;
    cin >> fillChar;

    int startRow, startCol;
    cin >> startRow >> startCol;

    int col = 0;
    int row = startRow;
    char oldStartPosValue = matrix[startRow][startCol];

    while (row >= 0 && row < rows && col < cols)
    {
        if (matrix[row][col] == oldStartPosValue)
        {
            matrix[row][col] = fillChar;
            row--;
        }
        else
        {
            row = startRow;
            col++;
        }
        if (row < 0)
        {
            row = startRow;
            col++;
        }

    }

    col = 0;
    while (row >= 0 && row < rows && col < cols)
    {
        if (matrix[row][col] == oldStartPosValue || matrix[row][col] == fillChar)
        {
            matrix[row][col] = fillChar;
            row++;
        }
        else
        {
            row = startRow;
            col++;
        }

        if (row >= rows)
        {
            row = startRow;
            col++;
        }


    }

    for( int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            cout << matrix[row][col];
        }
        cout << endl;
    }

    //deleting the allocated memory for the two dimensional array
    for(int i = 0; i < rows; ++i)
    {
        delete [] matrix[i];
    }
    delete [] matrix;

    return 0;
}
