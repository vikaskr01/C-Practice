#include <iostream>
using namespace std;

int main()
{

int n;
cout<<"Enter the number:";
cin>>n;



for(int i=1;i<=n;i++)
{
    if(n%i==0)
      {
        cout<<i<<"\n";
      } 
//cout<<endl;
}

return 0;






}