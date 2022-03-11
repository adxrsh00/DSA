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
    
    cout<<"Input Insert Element : ";
    int a;
    cin>>a;

    cout<<"Input Insert Position : ";
    int p;
    cin>>p;

    int ind=p-1;

    
    for (i=n-1;i>=ind;i--)
    {
        ar[i+1]=ar[i];
    }
    ar[ind]=a;
    n=n+1;

    cout<<"New array is : ";
    for(i=0;i<n;i++)

    {
        cout<<ar[i];
    }
   
}
