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
vector<int> searchRange(vector<int>& nums, int target) {
        int s=0;
      
        int n=nums.size()-1;
          int e=n;
        vector<int> a;
        int in=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                in=mid;
                e=mid-1;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else
            s=mid+1;
        }
        s=0;
        e=n;
        a.push_back(in);
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                in=mid;
                s=mid+1;
            }
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else
            s=mid+1;
        }
        a.push_back(in);
        return a;
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
    cout<<"enter elemt to search index"<<"endl";
    int x;
    cin>>x;
    vector<int> b=searchRange(a,x);
    cout<<"THE FIRST INDEX OF ELEMNT "<<x<<"is:-"<<b[0];
    cout<<"THE second INDEX OF ELEMNT "<<x<<"is:-"<<b[1];
return 0;
}