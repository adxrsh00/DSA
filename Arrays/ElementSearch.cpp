#include <iostream>
using namespace std;

int main()
{
   int n,i; 

 
   cout<<"Input Array size : ";
   cin>>n;
   int ar[n];

   cout<<"Input Array Elements : "<<endl;

    for(i=0;i<n;i++)

    {
        cin>>ar[i];
    }
    int x;
    cout<<"Input Element to Search : ";
    cin>>x;

    int a=0;
     for(i=0;i<n;i++)
    {
        if(ar[i]==x)
        {
        a++;
        cout<<"Element found";
        }

    }
    if(a==0)
    cout<<"Element Not found";
}
