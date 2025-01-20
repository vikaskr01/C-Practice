#include <iostream>
using namespace std;
string patt_check(string s1,string pat)
{
  int found=s1.find(pat);
  while(found !=string::npos)
  {
    cout<<"Pattern found at: "<<found<<endl;
  

    found=s1.find(pat,found+1);
  }

}
int main()
{
string s1,pat;
cout<<"Enter the string: ";
cin>>s1;
cout<<"Enter patter to find: ";
cin>>pat;


patt_check(s1,pat);
return 0;










}