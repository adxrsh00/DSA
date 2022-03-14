#include<iostream>

using namespace std;

bool Sortornot(int a[],int x)
{
    if(x==0||x==1)
    {
        return false;
    }
    for(int j =1;j<x;j++)
    {
        if(a[j-1]>a[j])
        return false;
    }
    return true;
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
    if(Sortornot(ar,n))
    {
        cout<<"yes sorted";   
    } 
    else{
        cout<<"Unsorted";
    }
}
