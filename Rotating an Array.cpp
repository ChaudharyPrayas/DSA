//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
int reverse(int arr[],int b,int e)
{
    for(int i=b;i<=(e-(e+b)/2);i++)
    {
        swap(arr[i],arr[e-i]);
    }
}
class Solution{   
public:
    void leftRotate(int arr[], int n, int d) {
     int a[n], m=0;
        if(d>n)
            d=d%n;
        for(int i=d;i<n;i++)
        {
            a[m]=arr[i];
            m++;
        }
        
        for(int i=0;i<d;i++)
        {
            a[m]=arr[i];
            m++;
        }
        
        for(int i=0;i<n;i++)
        {
            arr[i]=a[i];
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends