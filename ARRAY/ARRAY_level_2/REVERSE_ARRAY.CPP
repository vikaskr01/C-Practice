#include <iostream>
using namespace std;
int main()
{

string boss;
cin>>boss;

string reverse=" ";

int l=boss.length()-1;

while(l>=0)

{
    reverse=reverse+boss[l];
   l--;
}
cout<<reverse;



}