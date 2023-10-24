#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    //vector creation
    vector<int> v;
    vector<int> v1(4,1);
   //vector size and capacity
    cout<<"size of v  "<<v.size()<<endl;
    cout<<"capacity of v  "<<v.capacity()<<endl;
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout<<"size of v  "<<v.size()<<endl;
    cout<<"capacity of v  "<<v.capacity()<<endl;
    //update 
    v[1]=5;
cout<<"size of v1  "<<v1.size()<<endl;
    cout<<"capacity of v1  "<<v1.capacity()<<endl;
    v1.push_back(11);
    cout<<"size of v1 "<<v1.size()<<endl;
    cout<<"capacity of v1 "<<v1.capacity()<<endl;
    vector<int> v3={ 1,2,3,4,5};
    cout<<"size of v3 "<<v3.size()<<endl;
    //deletion
    vector<int>vnew;
    vnew.push_back(11);
    vnew.push_back(101);
    vnew.push_back(111);
    vnew.push_back(1111);
    cout<<"size of vnew "<<vnew.size()<<endl;
    cout<<"capacity of vnew "<<vnew.capacity()<<endl;
    vnew.pop_back();
    cout<<"size of vnew  "<<vnew.size()<<endl;
    cout<<"capacity of vnew  "<<vnew.capacity()<<endl;
    vnew.erase(vnew.begin()+1);
    cout<<"size of vnew  "<<vnew.size()<<endl;
    cout<<"capacity of vnew  "<<vnew.capacity()<<endl;
    for(int i=0;i<vnew.size();i++)
    cout<<vnew[i]<<endl;
    //insert at position
    vnew.insert(vnew.begin()+1,50);
    for(int i=0;i<vnew.size();i++)
    cout<<vnew[i]<<endl;
    vnew[1]=102;
    for(int i=0;i<vnew.size();i++)
    cout<<vnew[i]<<endl;
    vnew.clear();
     vnew.push_back(11);
    vnew.push_back(101);
    vnew.push_back(111);
    vnew.push_back(1111);
    cout<<"size of vnew  "<<vnew.size()<<endl;
    cout<<"capacity of vnew  "<<vnew.capacity()<<endl;
    //to get front and last element
    cout<<vnew[0]<<" "<<vnew.front()<<endl;
    cout<<vnew[vnew.size()-1]<<" "<<vnew.back()<<endl;
    cout<<vnew[2]<<" "<<vnew.at(2)<<endl;
    //copy the vector
    vector<int> ak;
    ak=vnew;
    cout<<ak.size()<<endl;
    //to print element
    for(int i=0;i<vnew.size();i++)
    cout<<vnew[i]<<" ";
    cout<<endl;
    for(auto it=vnew.begin();it!=vnew.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    for(auto it: vnew)
    cout<<it<<" ";
    cout<<endl;
//Sorting
vector<int>arr;
arr.push_back(120);
arr.push_back(10);
arr.push_back(11);
arr.push_back(1);
arr.push_back(11352);
//sorting in ascending
sort(arr.begin(),arr.end());
for(auto it: arr)
    cout<<it<<" ";
    cout<<endl;
//sorting in descending
sort(arr.begin(),arr.end(),greater<int>());
for(auto it: arr)
    cout<<it<<" ";
    cout<<endl;
    sort(arr.rbegin(),arr.rend());
for(auto it: arr)
    cout<<it<<" ";
    cout<<endl;
    //search
    //give output 1 if element ispresent and sorted in ascending
    cout<<binary_search(arr.begin(),arr.end(),1);
    //to find index
    cout<<find(arr.begin(),arr.end(),1)-arr.begin()<<endl;
    //to count no of times element occur
     vector<int> vect{ 3, 2, 1, 3, 3, 5, 3 };
    cout << "Number of times 3 appears : "
         << count(vect.begin(), vect.end(), 3)<<endl;
         //to find max element
         cout<<"max element"<<*max_element(vect.begin(),vect.end())<<endl;
//to find min element
         cout<<"min element"<<*min_element(vect.begin(),vect.end())<<endl;
 //lower 
 sort(vect.begin(),vect.end());
 for(auto it: vect)
    cout<<it<<" ";
    cout<<endl;
  cout << "lower bounf of  3 : "
         <<lower_bound(vect.begin(), vect.end(), 3)-vect.begin()<<endl;
      //upper bound
  cout << "upper bound of  3 : "
         <<upper_bound(vect.begin(), vect.end(), 3)-vect.begin()<<endl;   
}

