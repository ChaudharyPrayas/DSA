 #include <bits/stdc++.h>
 using namespace std;
 void rotate(vector<int>& a, int k) {
        k=k%a.size();
   reverse(a.begin(),a.end());
    reverse(a.begin(),(a.begin())+k);
     reverse((a.begin())+k,a.end());
    }
    int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=0,kp,k,n;
		cin>>n;
        cin>>kp;
		vector<int> a;
		for(i=0;i<=n-1;i++)
		{	cin>>k;
            a.push_back(k);
		}

	rotate(a,kp);  
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n";
	}
}
