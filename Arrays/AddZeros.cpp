#include<iostream>

using namespace std;

 void sortt(int ar[],int n)
 {
    int c=0;
     for(int j=0;j<n;j++)
    {
        if(ar[j]!=0)
        ar[c++]=ar[j]; 
    }
    for(int i=c;i<n;i++)
    {
        ar[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cout<<ar[i];
    }

}

int main()
{
    int n,i;  
   cout<<"Input Array size : ";
   cin>>n;
   int ar[10]
   cout<<"Input Array Elements : "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }  
     sortt(ar, n);
}
