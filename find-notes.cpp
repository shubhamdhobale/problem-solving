// Finding number of notes in amount

#include <iostream>
using namespace std;
int main()
{

    int n5, n10, n20, n50, n100, n500;
    int amount;

    cout << "Enter Amount: " << endl;
    cin >> amount;
    cout << endl;
    switch (n500 <= amount)
    {
    case 1:
        n500 = amount / 500;
        amount = amount - n500;
        break;
        
    }
  
    switch (n50 <= amount)
    {
    case 1:
        n50 = amount / 50;
        amount = amount - n50;
        break;
    }
    switch (n20 <= amount)
    {
    case 1:
        n20 = amount / 20;
        amount = amount - n20;
        break;
    }
    switch (n10 <= amount)
    {
    case 1:
        n10 = amount / 10;
        amount = amount - n10;
        break;
    }
    switch (n5 <= amount)
    {
    case 1:
        n5 = amount / 5;
        amount = amount - n5;
        break;
    }

    cout << "Number of 500 notes are:" << n500<<endl;
    cout << "Number of 100 notes are:" << n100<<endl;
    cout << "Number of 50 notes are:" << n50<<endl;
    cout << "Number of 200 notes are:" << n20<<endl;
    cout << "Number of 10 notes are:" << n10<<endl;
    cout << "Number of 5 notes are:" << n5<<endl;

    return 0;
}