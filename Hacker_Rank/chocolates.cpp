

#include <iostream>

using namespace std;


int main() {
int t;
cin>>t;
while(t--)
{
    int n,c,m;
    cin>>n>>c>>m;
    int con=0;

    con=n/c;
    int w=con;
    while(w>=m)
    {
        int d=w/m;
        int q=w%m;
        w=d+q;
        con+=d;
        cout<<con<<"\n";
        cout<<w<<"\n";
    }
    cout<<con<<"\n";
}


    return 0;

}
