#include<iostream>
using namespace std;
int  main()
{
   int arr[4][4];
     int i,j;
     cout<<"enter element of  array"<<endl;
     for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    
     cout<<"witout reverse"<<endl;
      for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
                }
                cout<<endl;
    }
    for(i=0;i<4;i++)
    {
        int s=0;int e=3;
        while(s<=e)
        {
            swap(arr[i][s],arr[i][e]);
            s++;e--;
        }
    }
     cout<<"after reverse"<<endl;
      for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<arr[i][j]<<" ";
                }
                cout<<endl;
    }
}
   
