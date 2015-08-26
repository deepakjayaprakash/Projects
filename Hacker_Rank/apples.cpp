#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int x=n,a[n];

    int sum=0;



    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%3==0)
        cout<<sum;

    else
    {
    int largest=0;
    for(int i=0;i<n;i++)
    {
        int d=sum-a[i];
        if(d%3==0&&d>largest)
            largest=d;
    }
     int largest2=0;
    for(int i=0;i<n-1;i++)
    {
        int d=sum-a[i]-a[i+1];
        if(d%3==0&&d>largest2)
            largest2=d;
    }
    if(n>=5)
    {


     int largest3=0;
    for(int i=0;i<n-2;i++)
    {
        int d=sum-a[i]-a[i+1]-a[i+2];
        if(d%3==0&&d>largest3)
            largest3=d;
    }
    if(largest3>largest2&&largest3>largest)
        cout<<largest3;

    }

    if(largest2>largest)
    cout<<largest;
    else
        cout<<largest2;
    }
    return 0;
}

