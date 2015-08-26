#include<iostream>
using namespace std;

int main()
{

int data[4];
cout<<"enter 4 bit data word:";
for(int i=0;i<4;i++)
cin>>data[i];

int code[7];
code[0]=data[0];
code[1]=data[1];
code[2]=data[2];
code[3]=0;
code[4]=data[3];
code[5]=0;
code[6]=0;

code[3]=code[3]^code[4]^code[5]^code[6];
code[5]=code[1]^code[2]^code[5]^code[6];
code[6]=code[0]^code[2]^code[4]^code[6];

cout<<"the code word generated is:";
for(int i=0;i<7;i++)
cout<<code[i];

cout<<"\n";
cout<<"enter the recieved code word:";
int rec[7];
for(int i=0;i<7;i++)
cin>>rec[i];

int par[3];
par[0]=rec[3]^rec[2]^rec[1]^rec[0];
par[1]=rec[0]^rec[1]^rec[4]^rec[5];
par[2]=rec[0]^rec[2]^rec[4]^rec[6];

//cout<<"parity bits are:"<<par[0]<<par[1]<<par[2];

if(par[0]==0&&par[1]==0&&par[2]==0)
{
cout<<"no error\n";
return 0;
}
