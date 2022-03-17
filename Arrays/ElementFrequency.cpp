#include<iostream>

using namespace std;

void freq(int ar[], int n)
{
    int f=1,i=1;
    while(i<n)
    {
    while(i<n && ar[i]== ar[i-1])
    {
        f++;
        i++;
    }
    cout<<ar[i-1]<<" "<<f<<endl;
    i++;
    f=1;
    }
    if(n==1 || ar[n-1]!= ar[n-2])
    {
        cout<<ar[n-1]<<" 1"<<endl;
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
     freq(ar,n);
}
