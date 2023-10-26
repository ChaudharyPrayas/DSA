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
    for(int i=1;i<=n;i++)
    {
        cout<<"subarray of size"<<i<<endl;
        for(j=0;j<n;j++)
        { if(j+i>n)
                break;
            cout<<j+1<<":-";
       
            for(k=j;k<j+i;k++)
            {
                
             cout<<arr[k]<<" ";
        }}
        cout<<endl;
    }
}