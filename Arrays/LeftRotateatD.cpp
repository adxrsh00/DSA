#include<iostream>

using namespace std;

void reverse(int ar[],int l, int h)
{
    while(l<h)
    {
        swap(ar[l],ar[h]);
        l++;
        h--;
    }
    
}


 void left(int ar[],int n,int a)
 {
    reverse(ar,0,a-1);
    reverse(ar,a,n-1);
    reverse(ar,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i];
    }  
}

int main()
{
    int n,i,a;  
   cout<<"Input Array size : ";
   cin>>n;
   cout<<"Input rotate place : ";
   cin>>a;
   int ar[10];

   cout<<"Input Array Elements : "<<endl;

    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }  
     left(ar,n,a);
}
