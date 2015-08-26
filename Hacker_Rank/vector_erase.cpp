


#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

  int n;
  cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++)
       {
       int a;
       cin>>a;
    v.push_back(a);
   }

int x,y,z;
cin>>x>>y>>z;

 v.erase(v.begin()+x);
  v.erase(v.begin()+y,v.begin()+z);

cout<<v.size()<<"\n";


   for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";

    return 0;
}
