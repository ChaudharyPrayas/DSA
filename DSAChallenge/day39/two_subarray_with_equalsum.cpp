#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
    int n,i;
    cout<<"enter size of array"<<endl;
    cin>>n;
    for( i=0;i<n;i++)
    {
        int in;
        cin>>in;
        arr.push_back(in);
    }
    int tsum=0;
    for( i=0;i<n;i++)
    {
      tsum+=arr[i];
    }
    int ps=0;
    for( i=0;i<n;i++)
    {
       ps+=arr[i];
       if(ps==(tsum-ps))
       {cout<<("yes");return 0;
       }
    }
    cout<<"no";
    return 0;
}