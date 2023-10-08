#include <iostream>
using namespace std;


//Linear Search on 2D Array
bool ispresent(int arr[3][3], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

// Print Row wise Sum
void printRowSum(int arr[][3], int row, int col)
{

    cout << "Printing row Wise Sum: " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

// Print col wise Sum
void printcolSum(int arr[][3], int col, int row)
{

    cout << "Printing col Wise Sum: " << endl;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

//Printing Row Of Maximum Sum
int largestRowSum(int arr[][3], int row, int col)
{
    int rowindex = -1;
    int maxi = INT64_MIN;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowindex = row;
        }
    }
    cout << " Maximum sum  is: " << maxi << endl;
    return rowindex;
}

int main()
{

    int arr[3][3];

    // input
    cout << "Enter Elements in array: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }

    // output
    cout << "your array is: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //searching
    cout << "Enter the element to search";
    int target;
    cin >> target;

    if (ispresent(arr, target, 3, 3))
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Element Not Found";
    }

    printRowSum(arr, 3, 3);

    printcolSum(arr, 3, 3);

    int ans = largestRowSum(arr, 3, 3);
    cout << "Maximum Sum row is: " << ans;
    return 0;
}