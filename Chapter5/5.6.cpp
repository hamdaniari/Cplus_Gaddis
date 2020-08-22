//This program  displays a list of numbers and their squares
#include <iostream>
using  namespace std;

int main()
{
    const int MIN_NUMBER = 1,
              MAX_NUMBER = 10;
    int num = MIN_NUMBER;       //counter

    cout << "Number Number Squared\n";
    cout << "--------------------------\n";
    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << num*num << endl;
        num++; //increment the counter.
    }
    return 0;
}