#include<iostream>

using namespace std;

 void left(int ar[],int n)
 {
    int c=ar[0];
     for(int j=1;j<n;j++)
    {
        ar[j-1]=ar[j];
        cout<<ar[j-1];
    }
    ar[n-1]=c;
        cout<<ar[n-1];
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
     left(ar, n);
}
