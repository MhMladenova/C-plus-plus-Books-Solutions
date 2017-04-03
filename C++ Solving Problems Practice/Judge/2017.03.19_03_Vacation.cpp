#include <iostream>
#include <string>

using namespace std;

void getAccomodation(string& accomodation, float budget);
void getLocationAndPrice(string season, float budget, string& location, float& price);

int main()
{
    float budget;
    float price = 0;
    string location;
    string accomodation;
    string season;

    cin >> budget >> season;

    getAccomodation(accomodation, budget);
    getLocationAndPrice(season, budget, location, price);

    cout.precision(2);
    cout << location << " - " << accomodation << " - " << fixed << price << endl;

    return 0;
}

void getAccomodation(string& accomodation, float budget)
{
    accomodation = "Hotel";
    if (budget <= 1000)
    {
        accomodation = "Camp";

    }
    else if (budget > 1000 && budget <= 3000)
    {
        accomodation = "Hut";
    }
}

void getLocationAndPrice(string season, float budget, string& location, float& price)
{
    location = "Morocco";
    if (season == "Summer")
    {
        location = "Alaska";
    }

    if (budget <= 1000)
    {
        price = (45 * budget) / 100;
        if (season == "Summer")
        {
            price = (65 * budget) / 100;
        }
    }
    else if (budget > 1000 && budget <= 3000)
    {
        price = (60 * budget) / 100;
        if (season == "Summer")
        {
            price = (80 * budget) / 100;
        }
    }
    else
    {
        price = (90 * budget) / 100;
    }
}
