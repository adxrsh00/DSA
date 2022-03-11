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
    int x;
    cout<<"Input Element to Search : ";
    cin>>x;

    int a,j;

     for(j=0;j<n;j++)
    {
        if(ar[j]==x)
        {
            break;
        }
    }
         for (a=j;a<n;a++)
           {
            ar[a]=ar[a+1];
           }       
        n=n-1;
    
     cout<<"New array is : "<<endl;
     for(i=0;i<n;i++)
          {
              cout<<ar[i];
         }
    }
