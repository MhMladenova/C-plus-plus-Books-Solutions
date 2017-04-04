#include <iostream>

using namespace std;

int main()
{
    const char LIMIT_CHAR = '*';
    const char EMPTY_CHAR = ' ';
    const char SAND_CHAE = '@';
    const char BCK_CHAR = '.';

    int num;
    cin >> num;

    int length = 2 * num + 1;
    int dot = 0;

    for (int row=1; row<=length; row++)
    {
        for (int col=1; col<=length; col++)
        {
            if(row == 1 || row == length)
            {
                cout << LIMIT_CHAR;
            }
            else
            {
                if(col <= dot || ((length - col) < dot))
                {
                    cout << BCK_CHAR;
                }
                else if(col == dot + 1 || ((length - col) == dot ))
                {
                    cout << LIMIT_CHAR;
                }
                else
                {
                    if(row == 2)
                    {
                        cout << EMPTY_CHAR;
                    }
                    else if (row == length - 1)
                    {
                        cout << SAND_CHAE;
                    }
                    else
                    {
                        if (row <= num)
                        {
                            cout << SAND_CHAE;
                        }
                        else
                        {
                           if (col == num + 1)
                           {
                               cout << SAND_CHAE;
                           }
                           else
                           {
                               cout << EMPTY_CHAR;
                           }
                        }
                    }
                }
            }
        }

        cout << endl;

        if (row > num)
        {
            dot--;
        }
        else
        {
            dot++;
        }
    }

    return 0;
}
