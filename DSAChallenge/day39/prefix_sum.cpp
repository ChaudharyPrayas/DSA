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
    vector<int>prefix(n);
    int pr=0;
    for(int i=0;i<n;i++)
    {
           pr+=arr[i];
           prefix[i]=pr;
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
        cout<<prefix[i]<<" ";
    }
    
}

