#include <iostream>
using namespace std;
int main()
{

int a;
cout<<"Enter the number: ";
cin>>a;

int ans=1;
for(int i=1;i<=a;i++)
  {
    ans=ans*i;
  }

cout<<ans;

return 0;


}