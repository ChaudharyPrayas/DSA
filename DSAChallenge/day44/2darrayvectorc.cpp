#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main()
{int row,col;
cout<<"enter rows and colums respectiveLy";

cin>>row;
cin>>col;
    vector<vector<int>> mat(row,vector<int>(col,0));
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"rows="<<mat.size()<<" "<<endl;
     cout<<"colums="<<mat[0].size()<<" ";
     //updation of valures
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>mat[i][j];
        }
    }
    //after updation
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

