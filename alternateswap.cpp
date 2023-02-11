#include<iostream>
using namespace std;
void printarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    cout<<a[i];
    return ;
}void altswap(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {  if(i<(n-1))
        {swap(a[i],a[i+1]);
        i++;
        }
    }
}
int main()
{int i,size;
    int a[100];
    cout<<"enter the size of array"<<"\n";
    cin>>size;
       cout<<"enter the elements of array"<<"\n";
  for(i=0;i<size;i++)
cin>>a[i];
cout<<"array before"<<"\n";
printarray(a,size);
altswap(a,size);
cout<<"\n"<<"array ater swap"<<"\n";
printarray(a,size);
return 0;
}