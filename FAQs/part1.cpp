#include<iostream>
#include<vector>

using namespace std;

//Sum of Odd
// int oddSum(vector<int> arr){
//   int sum = 0;
//   for(int i=0; i<arr.size(); i++){
//     if(arr[i] % 2 != 0){
//       sum += arr[i];
//     }
//   }
//   return sum;
// }

//Superior array element
// int SuperiorElement(vector<int> &arr){
//   int count = 1;
//   int superior = arr[arr.size() - 1];
//   for(int i=arr.size()-1; i>=0; i--){
//     if(arr[i] > superior){
//       superior = arr[i];
//       count++;
//     }
//   }
//   return count;
// }

int main(){

int n;
cin >> n;
vector<int> arr(n);
for (int i = 0; i < n; i++)
{
  cin >> arr[i];
}

// cout << SuperiorElement(arr) << endl;

  return 0;
}