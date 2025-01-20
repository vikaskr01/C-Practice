#include <iostream>
using namespace std;

/* int add(int arr[],int n)
{
  int ans=0;
  for(int i=0;i<n;i++)
    {
       ans=ans+arr[i];
    }
    
    return ans;
} */













int main()
{

//array size
int n;
cout<<"Enter size of arrar: ";
cin>>n;

//array elements
int arr[n];
cout<<"Enter array element of size "<<n<<":";
for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }

//sum of array
/* int sum=0;
for(int i=0;i<n;i++)
{
  sum=sum+arr[i];
}
cout<<"sum of array: "<<sum<<"\n";


//avg of array
int avg;
cout<<"avg of array: "<<sum/n; */


//min & max of array

int max=arr[0];

for(int i=0;i<n;i++)
{
  if(arr[i]>max)
   max=arr[i];
}
cout<< max;








return 0;
}