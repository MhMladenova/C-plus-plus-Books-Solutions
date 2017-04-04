#include <iostream>
#include <string>
#include <limits>

using namespace std;

int jelev, royal, roli, trofon, sino, others;

void checkTrainer(string trainer);

int main()
{
    int trainersCount;
    cin >> trainersCount;

    float budget;
    cin >> budget;

    string trainer;
    int index = 0;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    do
    {
        getline(cin, trainer);
        checkTrainer(trainer);
        index++;
    }
    while (index < trainersCount);

    float lectionPrice = budget / trainersCount;

    cout.precision(2);

    cout << "Jelev salary: " << fixed << jelev * lectionPrice << " lv" << endl;
    cout << "RoYaL salary: " << fixed << royal * lectionPrice << " lv" << endl;
    cout << "Roli salary: " << fixed << roli * lectionPrice << " lv" << endl;
    cout << "Trofon salary: " << fixed << trofon * lectionPrice << " lv" << endl;
    cout << "Sino salary: " << fixed << sino * lectionPrice << " lv" << endl;
    cout << "Others salary: " << fixed << others * lectionPrice << " lv" << endl;

    return 0;
}

void checkTrainer(string trainer)
{
    if (trainer == "Jelev")
    {
        jelev++;
    }
    else if (trainer == "RoYaL")
    {
        royal++;
    }
    else if (trainer == "Roli")
    {
        roli++;
    }
    else if (trainer == "Trofon")
    {
        trofon++;
    }
    else if (trainer == "Sino")
    {
        sino++;
    }
    else
    {
        others++;
    }
}
