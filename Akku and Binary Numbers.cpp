//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:
    void precompute()
    {
        // Code Here
    }
    
    long long solve(long long l, long long r){
        // Code Here
        long long ans = 0;

        for(int i=63;i>=0;i--){

            for(int j = i-1;j>=0;j--){

                for(int k = j-1;k>=0;k--){

                    long long x = pow(2,63-i)+pow(2,63-j)+pow(2,63-k);

                    if(x>=l and x<=r) ans++;

                }

            }

        }

        return ans;
    }
    
};



//{ Driver Code Starts.

int main()
{
    int t;
    Solution ob;
    ob.precompute();
    cin>>t;
    while(t--)
    {
        long long l,r;
        cin>>l>>r;
        cout << ob.solve(l, r) << endl; 
    }
    return 0;
}
// } Driver Code Ends