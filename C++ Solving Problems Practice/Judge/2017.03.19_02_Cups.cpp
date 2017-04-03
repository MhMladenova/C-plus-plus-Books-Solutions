#include <iostream>

using namespace std;

int main()
{
    const double CUP_PRICE = 4.2;
    const int WORKING_HOURS_A_DAY = 8;
    int sheduledCups, employees, workingDays;

    cin >> sheduledCups >> employees >> workingDays;

    int cupsMade = (workingDays * WORKING_HOURS_A_DAY * employees) / 5;

    double expectedIncome = sheduledCups * CUP_PRICE;
    double realIncome = cupsMade * CUP_PRICE;

    cout.precision(2);
    if(realIncome > expectedIncome)
    {
        cout << fixed << realIncome - expectedIncome << " extra money";
    }
    else
    {
        cout << "Losses: " << fixed << expectedIncome - realIncome;
    }

    return 0;
}
