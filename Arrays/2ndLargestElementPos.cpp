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
    
    int max=0,max2=-1;

     for(i=1;i<n;i++)
    {
        if(ar[i]>ar[max])
         {
             max2=max;
             max=i;
         }
         else if(ar[i]!=ar[max])
         {
             if(max2==-1||ar[i]>ar[max2])
             max2=i;
         }
    }   
    cout<<"2nd Largest Array Position is : "<<max2;
}
