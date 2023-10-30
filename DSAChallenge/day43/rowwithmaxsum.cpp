#include<iostream>
using namespace std;
int  main()
{
   int arr[4][3];
     int i,j;
     cout<<"enter element of  array"<<endl;
     for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
        int sum=INT32_MIN;
        int index;
             for(i=0;i<4;i++)
    {int rs=0;
        for(j=0;j<3;j++)
        {
           rs+=arr[i][j];
        }
        if(rs>sum)
        {
            sum=rs;index=i;
        }

    }
    cout<<"row with maximumsum is"<<endl;
    cout<<index+1<<"row"<<endl;
}