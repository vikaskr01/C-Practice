#include <iostream>
using namespace std;


bool check_for_sorting(int n,int arr[])
{
   for(int i=1;i<n;i++)
   {
   if(arr[i] < arr[i-1])
      return false;
   }
  return true;

}

int main()
{
int n;
cout<<"Enter n:";
cin>>n;
int arr[n];

for(int i=0;i<n;i++)
{
    cout<<"Enter Array:";
    cin>>arr[i];
}
 
 if(check_for_sorting(n,arr)==false)
  cout<<"NOT SORTED";

  else
  cout<<"SORTED";

return 0;



}