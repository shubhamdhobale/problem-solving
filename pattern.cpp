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
        cout << count << " " ;
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
    return 0;
}
