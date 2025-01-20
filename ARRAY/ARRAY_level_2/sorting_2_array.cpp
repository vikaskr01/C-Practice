#include <iostream>
using namespace std;

int main()
{
int n;
cout<<"Enter n:";
cin>>n;
int arr[n];
cout<<"Enter Array:";
cin>>arr[n];

for(int i=0;i<n;i++)
   {
       cin>>arr[i];   //print address for each
       //cout<<endl;
   


    if(arr[i+1] > arr[i])
        cout<<"SORTED";
   else 
    cout<<"not sorted";

   }
   cout<<endl;
return 0;

}