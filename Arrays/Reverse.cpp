#include<iostream>

using namespace std;

void reverse(int ar[],int n)
{
    for(int j=n;j>=0;j--)
    {
        cout<<ar[j];
    }
}

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
    reverse(ar,n-1); 
}
