#include <iostream>
using namespace std;
int main()
{

int a,b;
cout<<"Enter two numbers";
cin>>a
   >>b;
int ans=1;
for(int i=1;i<=a && i<=b;i++)
{

  if(a%i==0 && b%i==0)
    {
        ans=i;
    }
  
   
}
cout<<ans;
return 0;

}