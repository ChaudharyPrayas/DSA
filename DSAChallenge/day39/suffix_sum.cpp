#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int n,j,k;
    cout<<"enter size of array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int in;
        cin>>in;
        arr.push_back(in);
    }
    vector<int>suffix(n);
    int pr=0;
    for(int i=n-1;i>=0;i--)
    {
           pr+=arr[i];
           suffix[i]=pr;
    }
    cout<<"the array is:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"the array with preix sum is:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<suffix[i]<<" ";
    }
    
}

