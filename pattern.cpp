#include<iostream>
using namespace std;
int main(){

int n;
cin>> n;
int i = 1;
while (i <= n)
{
    int j = 1;
    while (j <= n)
    {
      cout << j << " ";     //For reverse => cout << n-j+1 << " ";
      j++;
    }
    cout << endl;
    i++;
}
/* ---Output---
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
1 2 3 4 5
*/
/*--------------------------------------------------------------------*/

int n;
cin>> n;
int i =1;
int count = 1;
while (i<=n)
{
int j =1;
while (j <= n)
{
    cout << count << " ";
    count++;
    j++;

}
cout<<endl;
i++;
    }
/*
    ---Output---
1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15
16 17 18 19 20
21 22 23 24 25
*/
/*------------------------------------------------------------------*/

int n;
cin >> n;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= i; j++)
    { 
        cout << i << " " ;
    }
    cout << endl;
}
/*
   ---Output---
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
 */
/*------------------------------------------------------------------*/

int n;
cin >> n;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= i; j++)
    { 
        cout << "*" << " " ;
    }
    cout << endl;
}
/*
---Output----
*
* *
* * *
* * * *
* * * * *
*/
/*------------------------------------------------------------------*/

int n;
cin >> n;
int count =1;
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= i; j++)
    { 
        cout << count << " " ;       //For reverse => cout << i-j+1 << " " ;
        count++;
    }
    cout << endl;
}
/*
---Output----
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

/*------------------------------------------------------------------*/

    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int cols = 1;
        while (cols <= n)
        {
            char ch = 'A' + row - 1;
            cout << ch << " ";
            cols++;
        }
        cout << endl;
        row++;
    }
    /*
    ---Output----
    A A A A A
    B B B B B
    C C C C C
    D D D D D
    E E E E E
    */
    /*------------------------------------------------------------------*/
    int n;
    cin >> n;
    int row = 1;
    char start = 'A';
    while (row <= n)
    {
        int cols = 1;
        while (cols <= n)
        {
            cout << start << " ";
            start++;

            cols++;
        }
        cout << endl;
        row++;
    }
    /*
    ---Output----
A B C D E
F G H I J
K L M N O
P Q R S T
U V W X Y
*/
    /*------------------------------------------------------------------*/
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int cols = 1;
        while (cols <= n)
        {
            char start = 'A' + row + cols - 2;
            cout << start << " ";
            start++;

            cols++;
        }
        cout << endl;
        row++;
    }
    /*
    ---Output----
A B C D E
B C D E F
C D E F G
D E F G H
E F G H I
*/
    /*------------------------------------------------------------------*/
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int cols = 1;
        while (cols <= row)
        {
            char start = 'A' + row - 1;
            cout << start << " ";
            start++;

            cols++;
        }
        cout << endl;
        row++;
    }
    /*
    ---Output----
A
B B
C C C
D D D D
E E E E E
*/
    /*------------------------------------------------------------------*/
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int cols = 1;
        while (cols <= row)
        {
            char start = 'A' + row + cols - 2;
            cout << start << " ";
            start++;

            cols++;
        }
        cout << endl;
        row++;
    }
    /*
    ---Output----
A
B C
C D E
D E F G
E F G H I
*/
    /*------------------------------------------------------------------*/
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int cols = 1;
        char start = 'A' + n - row;

        while (cols <= row)
        {
            cout << start << " ";
            start++;
            cols++;
        }
        cout << endl;
        row++;
    }
    /*
         ---Output----
     E
     D E
     C D E
     B C D E
     A B C D E
     */

    /*------------------------------------------------------------------*/
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= row)
        {
            cout << j;
            j++;
        }
        int start = row - 1;
        while (start)
        {
            cout << start;
            start--;
        }
        cout << endl;
        row ++;
    }
    /*
    ---Output----
   1
  121
 12321
1234321
123454321
*/

    return 0;
}
