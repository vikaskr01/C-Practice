#include <iostream>
using namespace std;

//SOLID PATTERN PRINT
/* int main()
{
   int n;
   cout<<"Enter no. of rows:";
   cin>>n;

   for(int i=0;i<n;i++)
      {
          for(int j=1;j<=n;j++)
              {
                cout<<"* ";
              }

          cout<<endl;
      }
return 0;
} */

//PYRAMID PATTERN
/* int main()
{
  int n;
  cout<<"Enter number of rows:";
  cin>>n;

  for(int i=1;i<=n;i++)
     {
      for(int j=1;j<=n-i;j++)
           {
            cout<<" ";
           }
      for(int j=1;j<=2*i-1;j++)
           {
            cout<<"*";
           }
          cout<<endl;     
     }
     return 0;
} */

//INVERTED PYRAMID PATTERN
/* int main()
{
  int n;
  cout<<"Enter no of rows:";
  cin>>n;

for(int i=0;i<n;i++)
  {
    for(int j=0;j<= i ;j++)
        {
          cout<<" ";
        }
    for(int j=1;j<= 2*n-2*i-1;j++)
        {
          cout<<"*";
        }    
        cout<<endl;
  }

return 0;


} */

//RIGHT ANGLE TRIANGLE PATTERN
/* int main()
   {
     int n;
     cout<<"Enter the number:";
     cin>>n;

     for(int i=1;i<=n;i++)
     {
        for(int j=1;j<=i;j++)
        {
            cout<<"* ";

        }
        cout<<endl;
     }
       


return 0;
   } */

//INVERTED RA TRIANGLE PATTERN
/* int main()
{
int n;
cin>>n;


for(int i=0;i<n;i++)
   {
    for(int j=1;j<=n-i;j++)
          {
            cout<<"* ";
          }
          cout<<endl;
   }

return 0;

} */

//HOLLOW SOLID  ---------NOT ABLE TO SOLVE
/* int main()
{
   int n;
   cout<<"Enter no of rows:";
   cin>>n;



   for(int i=0;i<n;i++)
   {
          for(int j=0;j<n;j++)
             cout<<"*";
          for(int j=0;j<1;j++)
             cout<<""

        cout<<endl;
   }







} */

//HOLLOW RIGHT A. TRIANGLE
/*
      
      * 
      *  *   
      *    *
      *      *
      *        *
      *          *  
      *            *     
      *              *                 
      * * * * * * * * *

*/
int main()
{
int n;
cout<<"ENTER NO OF ROWS:";
cin>>n;

for(int i=1;i<=n;i++)
  {
        if(i=1)
        {
          cout<<"*";
        }
      
      for(int j=0;j<=0;j++)
         




  }







}

























