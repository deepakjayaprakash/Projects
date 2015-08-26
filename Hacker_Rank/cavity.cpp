#include <cmath>
#include<cstring>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
     char a[n][n];
     string s[n];

     for(int i=0;i<n;i++)
        cin>>s[i];



     for( int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
            a[i][j]=s[i];
     }

 for( int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
            cout<<a[i][j];
     }

     cout<<endl<<endl<<endl;
     /*for( int i=0;i<n;i++)
     {
         for(int j=0;j<n;j++)
             {
            if(i!=0&&j!=0&&i!=(n-1)&&j!=(n-1))
            {
                if(a[i][j]>a[i][j-1]&&a[i][j]>a[i-1][j]&&a[i][j]>a[i][j+1]&&a[i][j]>a[i+1][j])
                    cout<<"X";
                else
                    cout<<a[i][j];
            }
            else
                    cout<<a[i][j];
     }cout<<"\n";
     }
     */
    return 0;

}
