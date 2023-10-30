#include<iostream>
using namespace std;
bool search(int arr[][3],int ele)
{
    int i,j;
     for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            if(arr[i][j]==ele)
            return 1;
}
    }
    return 0;
}
int  main()
{
     int arr[4][3];
     int i,j;
     for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    //to take element to be searched
    cout<<"enter element to be searched"<<endl;
    int ele;
    cin>>ele;
    if(search(arr,ele))
    cout<<"element found"<<" ";
    else
    cout<<"element not found";
}