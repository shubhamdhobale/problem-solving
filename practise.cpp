//selection sort
#include<iostream>
#include<vector>
using namespace std;

// void selectionSort(vector<int> &arr){
//   int n = arr.size();
//   for(int i=0; i<n-1; i++){
//     int min = i;
//     for(int j=i; j<n; j++){
//       if( arr[j] < arr[min]){
//         swap(arr[min] , arr[j]);
//       }
//     }
//   }
// }

void bubbleSort(vector<int> &arr , int n){
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){
    if(arr[i] > arr[j]){
      swap(arr[i] , arr[j]);
    }
    }
  }
  // bubbleSort(arr , n-1);
}

int main(){

vector<int> arr = {3,5,1,9,5,8,4};
// selectionSort(arr);
bubbleSort(arr , 7);
for(int i=0; i<arr.size(); i++){
  cout<<arr[i]<<" ";
}
  return 0;
}