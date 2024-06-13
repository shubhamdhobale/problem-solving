#include<iostream>

using namespace std;

bool search(int *arr , int size , int key){
  if (size == 0)
  {
    /* code */
    return 0;
  }
  if (size == key)
  {
    /* code */
    return arr[0];
  }
  int repart = search(arr + 1 , size - 1 , key);
  return repart;
  
  
}
int main(){
  int arr[5] = {5 ,8,2,2,4};
  int size = 5;
  int key = 10;
int ans = search(arr , size , key);
if (ans)
{
  /* code */
  cout<<"present";
  
}
cout<<"absent";

}