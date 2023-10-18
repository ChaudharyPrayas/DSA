#include<bits/stdc++.h>
using namespace std;
void bubble(vector<int> &a,int n)
{
for(int i=0;i<n-1;i++)
{
    int swa=0;
    for(int j=0;j<n-1-i;j++)
    {
         if(a[j]>a[j+1])
         {swap(a[j],a[j+1]);
         swa=1;
         }
    }
    if(swa==0)
    break;
}
return ;
}
int main()
{
    vector<int> a;
    int n;
    cout<<"enter size ";
    cout<<endl;
    cin>>n;
    cout<<"enter elements"<<endl;
    for(int i=0;i<n;i++)
    {
    int e;
    cin>>e;
    a.push_back(e);
    }
     cout<<"unsorted form"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    bubble(a,n);
    cout<<endl<<"sorted form"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
return 0;
}