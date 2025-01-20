#include <iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter two values:";
    cin>>a>> b;

    int start=max(a,b);
    int end=min(a,b);

    if(max(a,b)==min(a,b))
    {
         cout<<"The hcd of a & b is: "<<a;
    }

    else
    { 
        
        cout<<"The hcd of a & b is: "<<max(a,b)-min(a,b);
    } 
    
    return 0;
}