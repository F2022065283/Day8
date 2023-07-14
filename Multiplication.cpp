#include<iostream>
using namespace std;
int main()
{
    int n,min;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
      cout<<a[i]<<",";
    }
    for(int i=0;i<n;i++)
    {
      if(a[0]>a[i])
      min=a[0];
      
    }
    cout<<"largest"<<min<<endl;
    cout<<"Smallest"<<min<<endl;


}
