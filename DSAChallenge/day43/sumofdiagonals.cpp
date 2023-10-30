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
    int fdiagonal=0;
      for(i=0;i<4;i++)
    {
        fdiagonal+=arr[i][i];
    }
    i=0;j=4-1;
    int sdiagonal=0;
    while(j>=0)
{
    sdiagonal+=arr[i][j];
    i++; j--;
}
cout<<"sum of first diagonal is"<<fdiagonal<<endl;
cout<<"sum of second diagonal is"<<sdiagonal<<endl;
return 0;
}