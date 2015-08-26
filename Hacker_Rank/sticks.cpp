
#include <iostream>

using namespace std;


int main() {

  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
int count;
  do{
int count=0;
for(int j=0;j<n;j++)
{
     if(a[j]!=0&&a[j]!=-1)
    {
        count++;
    }

    if(a[j]!=0&&a[j]!=-1)
    {
        a[j]-=2;
    }

}
cout<<count;
  }while(count!=0);
    return 0;
}
