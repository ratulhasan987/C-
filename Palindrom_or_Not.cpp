//check Palindrom Or Not
#include<bits/stdc++.h>
using namespace std;
int main(){
int n, sum=0;
cout<<"Enter your input: ";
cin>>n;
for(int i=n; i!=0; i/=10){
    sum=(sum*10)+(i%10);
}
if(sum==n)
 cout<<"Palindrom";
else
    cout<<"not palindrom";
}
