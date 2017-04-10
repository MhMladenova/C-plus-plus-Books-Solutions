#include<iostream>
#include<sstream>
#include<vector>
#include "SmartArray.h"

using std::string;
using std::vector;

class PrimeCalculator
{
    vector<int> primes;

public:
    PrimeCalculator(int primesToCalculate)
    {
        if (primesToCalculate > 0)
        {
            primes.push_back(1);

            int primeIndex = 1;
            int currentNumber = primes[primeIndex - 1] + 1;
            while(primeIndex < primesToCalculate)
            {
                bool isPrime = true;

                // NOTE: a more efficient method will only check against the primes calculated so far, not against all numbers
                for (int divisorCandidate = 2; divisorCandidate < currentNumber; divisorCandidate++)
                {
                    if (currentNumber % divisorCandidate == 0)
                    {
                        isPrime = false;
                        break;
                    }
                }

                if (isPrime)
                {
                    primes.push_back(currentNumber);
                    primeIndex++;
                }

                currentNumber++;
            }
        }
    }

    int getPrime(int primeIndex)
    {
        return this->primes[primeIndex];
    }

    int getLast()
    {
        return getPrime(this->primes.size() - 1);
    }

    string toString()
    {
        using std::ostringstream;

        ostringstream stream;
        for (int i = 0; i < this->primes.size(); i++)
        {
            stream << this->primes[i] << " ";
        }

        return stream.str();
    }
};

PrimeCalculator getPrimesSmallerThan(int number)
{
    int guessPrimes = 1;

    PrimeCalculator lastPrimes(guessPrimes);

    bool foundAllSmaller = true;
    if (lastPrimes.getLast() > number)
    {
        return PrimeCalculator(0);
    }
    else
    {
        foundAllSmaller = false;
    }

    // NOTE: again, this is an inefficient way of calculating primes, but the purpose of the demo is not to calculate
    // primes, but do demonstrate the Rule of Three. And inefficient approaches illustrate the need for
    // Rule of Three better (and keep the code simpler)
    while(!foundAllSmaller)
    {
        guessPrimes += 1;

        PrimeCalculator newGuess(guessPrimes);
        if (newGuess.getLast() > number)
        {
            foundAllSmaller = true;
        }
        else
        {
            lastPrimes = newGuess;
        }
    }

    return lastPrimes;
}

int main()
{
    using std::cout;
    using std::endl;

    cout << "first 10 primes:" << endl;
    cout << PrimeCalculator(10).toString() << endl;

    cout << "primes smaller than the number 42:" << endl;
    cout << getPrimesSmallerThan(42).toString() << endl;

    // this should print the first 10000 primes... if you're patient enough
    cout << "primes smaller than the number " << 104729 + 1 << ":"<< endl;
    cout << getPrimesSmallerThan(104729 + 1).toString() << endl;

    return 0;
}
