#include <iostream>
using namespace std;

int main()
{
int a;
cin>>a;


int count=0;

while(a>0)
{
  a=a/10;

    count ++;
}  

cout<<count;
return 0;






}