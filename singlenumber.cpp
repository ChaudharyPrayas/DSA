 #include<bits/stdc++.h>
 using namespace std;
 int singleNumber(vector<int>& nums) {
        int i,ans=0;
    for(i=0;i<nums.size();i++)
    {
          ans=nums[i]^ans;
    }
    return ans;
    }
    int main()
    {int i,n,k;
        vector<int> nums;
       // cout<<"entersize"<<"\n";    
        cin>>n;    
       // cout<<"enter the number in array"<<"\n";
        for(i=0;i<n;i++)
       {cin>>k;
       
       nums.push_back(k);
       }
       k=singleNumber(nums);
        cout<<"singlenumber"<<k;
return 0;
    }