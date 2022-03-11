#include <iostream>
using namespace std;

int main()
{
   int n,i;  
   cout<<"Input Array size : ";
   cin>>n;
   int ar[10];

   cout<<"Input Array Elements : "<<endl;

    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }   
    
    int max=0;

     for(i=1;i<n;i++)
    {
        if(ar[i]>ar[max])
         {
             max=i;
         }
    }   
    cout<<" Largest Array Position is : "<<max;
}
