#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool isprime = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isprime = 0;
            break;
        }
        if (isprime == 1)
        {
            cout << "Number is prime";
            break;
        }
        else
        {
            cout << "given number is not a string";
        }
    }
    return 0;
}
