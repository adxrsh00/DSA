#include<iostream>

using namespace std;

 void duplicate(int ar[],int n)
 {

     for(int j=0;j<n;j++)
    {
        if(ar[j]!=ar[j+1])
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
    sort(ar, ar+n);
    duplicate(ar,n);       
}
