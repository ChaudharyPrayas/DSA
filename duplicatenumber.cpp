#include<bits/stdc++.h>
 using namespace std;
 
    int findDuplicate(vector<int>& nums) {
        int i,c,d;
        int n=nums.size();
        for(i=0;i<n;i++)
        { d=abs(nums[i]);
            if(nums[d]<0)
            {c=d;
            break;}
            nums[d]=nums[d]*(-1);
        }
        for(i=0;i<n;i++)
        {
            if(nums[i]<0)
            nums[i]=nums[i]*-1;
        }
        return c;
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
       k=findDuplicate(nums);
        cout<<"duplicate"<<k;
return 0;
    }