#include<iostream>
using namespace std;
int  main()
{
     int arr1[4][3];
     int arr2[4][3];
     int i,j;
     cout<<"enter element of first array"<<endl;
     for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr1[i][j];
        }
    }
    cout<<"\n"<<"enter elemts of 2nd array"<<endl;
     for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr2[i][j];
        }
    }
    cout<<"\n"<<"1st array is"<<endl;
      for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n"<<"2nd array is"<<endl;
      for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"\n"<<"sum of array,s is"<<endl;
      for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            arr1[i][j]=arr1[i][j]+arr2[i][j];
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
}