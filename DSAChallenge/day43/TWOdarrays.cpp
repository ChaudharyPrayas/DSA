#include<iostream>
using namespace std;
//to print elements column wise
void printcol(int arr[][3])
{int i,j;
for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
                    }
                    cout<<endl;
    }
}
int main()
{
    int arr[4][3]={1,2,3,4,5,6,7,8,9,10,11,12};
    int i,j;
    //print elements of array
    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<arr[i][j]<<" ";
                    }
    }
    cout<<endl;
    printcol(arr);

}
