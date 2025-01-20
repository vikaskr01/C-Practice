/* #include <iostream>
using namespace std;
void matrix(int arr[3][3]){
for(int i=0;i<3;i++)
  for(int j=0;j<3;j++)
     {
        arr[i][j]=i+j+10;
        cout<<arr[i][j]<<" ";
     }
}

void transpose(int arr[3][3]){
for (int i=0;i<3;i++)
  for(int j=0;j<3;j++)
     { 
         arr[i][j]=arr[j][i];
         cout<<arr[i][j]<<" ";
     }
}  

int main()
{

int arr[3][3];
matrix(arr);
transpose(arr);
 
return 0;

} */
#include <iostream>
using namespace std;
int main()
{
for(int a=0;a<9;a++)
{
   a=a+2;
   a--;
}


return 0;


}