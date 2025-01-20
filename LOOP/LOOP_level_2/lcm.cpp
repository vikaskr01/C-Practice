#include <iostream>
using namespace std;
int main()
{
int a , b;
cout<<"Enter two numbers: ";
cin>>a
   >>b;

for(int i=1;i<=a*b;i++)
  if(i%a==0 && i%b==0)
    {
        cout<<i;
        break;
    }


return 0;







}