 #include<bits/stdc++.h>
 using namespace std;
 void sortColors(vector<int>& nums) {
       int i,j,k=0;
      int n=nums.size();
       for(i=0;i<2;i++)
       {
       for(j=0;j<n;j++)
       {
       if(nums[j]==i)
         swap(nums[j],nums[k++]);
       }
       }
       return ;
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
          sortColors(nums);
       for(i=0;i<nums.size();i++)
       {
        cout<<nums[i]<<" ";
       }
       return 0;
    }