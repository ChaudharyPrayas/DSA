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
            cin>>mat[i][j];
        }
    }
    cout<<"output in wave form is"<<endl;
     for(i=0;i<col;i++)
    {      if(i%2==0)
        {for(j=0;j<row;j++)
        {
            cout<<mat[j][i];
        }
        }
        else
        {
            for(j=row-1;j>=0;j--)
            {
                cout<<mat[j][i];
            }
        }
    }
}