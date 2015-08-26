// lower_bound/upper_bound example
#include <iostream>     // std::cout
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>       // std::vector
using namespace std;
int main () {

  int n;
  cin>>n;
  std::vector<int>v(n);

   for(int i=0;i<n;i++)
   {
       cin>>v[i];
   }
int size;
cin>>size;


vector<int>find(size);
for(int i=0;i<size;i++)
   {
       cin>>find[i];
   }


for(int j=0;j<size;j++)
{


 for(int i=0;i<size;i++)
   {
       if(find[j]==v[i]){
        cout<<"YES "<<i+1<<"\n";
        break;}
       else if(v[i]>find[j])
       {
           cout<<"NO "<<i+1<<"\n";
           break;
       }
   }
}


  return 0;
}

