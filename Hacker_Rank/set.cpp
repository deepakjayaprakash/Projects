#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
 set<int>st; //Creates a set of integers.
    int q;
    cin>>q;
    for(int i=0;i<q;i++)
        {int choice,num;
        cin>>choice>>num;
         if(choice==1)
             st.insert(num); //Inserts an integer x into the set s.
         else if(choice==2)
             st.erase(num); //Erases an integer val from the set s.
             else if(choice==3)
             {
             set<int>::iterator itr=st.find(num);
             if(itr==st.end())
                 cout<<"No"<<"\n";
             else
                 cout<<"Yes"<<"\n";

         }

    }
    return 0;
}
