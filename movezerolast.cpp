 #include<bits/stdc++.h>
 using namespace std;
 void moveZeroes(vector<int>& nums) {
        int n =nums.size();
      int i,j;
      for(i=0,j=0;i<n,j<n;)
      {
          if(nums[j]!=0)
          {
              swap(nums[i++],nums[j++]);
          }
          else
          {
              j++;
          }
      }
    }
    int main()
    {
        int i,n,k;
        vector<int> nums;
       // cout<<"entersize"<<"\n";    
        cin>>n;    
       // cout<<"enter the number in array"<<"\n";
        for(i=0;i<n;i++)
       {cin>>k;
       
       nums.push_back(k);
       }
          moveZeroes(nums);
       for(i=0;i<nums.size();i++)
       {
        cout<<nums[i]<<" ";
       }
       return 0;
    }