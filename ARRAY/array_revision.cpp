#include <iostream>
using namespace std;

//print address of first element
/*int main()
{
  int arr[] {10,20,30,40};
  cout<<arr<<"\n";
return 0;
} */

//array size input from user.....only array declaration .....not initialization
//array element gets RANDOM VALIUES
/*int main()
{
int n;
cin>>n;
int arr[n];


cout<<arr[0]<<" ";
cout<<arr[1]<<" ";
cout<<arr[2]<<" ";
cout<<arr[3]<<" ";
cout<<arr[4]<<" ";
cout<<arr[5]<<" ";


return 0;

}   */

//what if we not write array size & initialize array .......compiler automatic
/*int main()
{
int arr[]={1,2,3,4,5};
cout<<arr[4];
return 0;
} */

//what is array size is 0....elements at 0 index gets random values
/*int main()
{
  int arr[0];
  cout<<arr[0];
  return 0;
} */

//out of bound checking.......random value.......compiler error
/*int main ()
{
  int n;
  int arr[4]={1, 2, 3,4};
  cout<<arr[5];
  return 0;
}  */

//SIZE OF ARRAY.......in bytes
/*int main (){
int arr[5] {1,4,7,9,56};
cout<<sizeof(arr);          //20 bytes  {4 bytes for each int value}
return 0;
}  */

//Count number of element in array
/*int main()
{
  int arr[] {1,4,5,6,7,8,9,2,3,4,5,6,8};     //divide size of all arr by any indivi.
  cout<<sizeof(arr)/sizeof(arr[0]);
  return 0;
}  */

//ARRAY TRAVERSAL.............print all the array elements one by one
//Using normal Loop
/*int main()
{
int n;
//cout<<"Enter size of array:";
//cin>>n;

int arr[5] {1,2,3,4,5};

for(int i=0;i<5;i++)
  {
    cout<<arr[i]<<endl;
  }
  return 0;
} */
//Using range based for loop
/*int main()
{
  int arr[] {1,2,3,4,5};
  for(int x:arr)
   {
    cout<<x<<endl;
   }
 
 return 0;
} */

//decremrnt array value
/* int main()
{

int arr[5] {54,43,2,1,5};

//for(int i=0;i<5;i++)
//cout<<arr[i]<<" ";

for(int & x: arr)
x=x-1;

for(int x: arr)
 {
 cout<<x<<" ";
 }

return 0;

}  */

//check if array is sorted or not

int main()
{
  int n;
  cin>>n;
int arr[n];
cout<<"Enter Array";
cin>>arr[n];

if(arr[n]<arr[n+1])
   {
     cout<<"Array is sorted";
   }

else
    {
      cout<<"Array is not sorted";
    }


return 0;

}

















