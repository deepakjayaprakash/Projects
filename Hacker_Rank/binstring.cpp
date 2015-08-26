#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,k,t;
    string s;
    cin>>n>>k>>t;
    cin>>s;


    for(int i=1;i<t;i++)
    {
        for(int j=0;j<n-k;j++)
        {


        if(s[j]==0&&s[j+k]==1)
        {
            char temp;
            temp=s[j];
            s[j]=s[j+1];
            s[j+1]=temp;
        }
    }
    }
    cout<<s;
    return 0;
}
