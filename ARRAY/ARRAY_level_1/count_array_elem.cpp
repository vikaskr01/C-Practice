#include <iostream>
using namespace std;
int main()
{
  int arr[] {1,4,5,6,7,8,9,2,3,4,5,6,8};     //divide size of all arr by any indivi.
  cout<<sizeof(arr)/sizeof(arr[0]);
  return 0;
}