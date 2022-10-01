#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    int saving;
    cin>>saving;
    if(saving>5000)
    {
        if(saving>10000){
        cout<<"oyo\n";}
        else
        cout<<"chai\n";
    }
    else if(saving>2000){
        cout<<"rashmika\n";
    }
    else{
        cout<<"frnd\n";
    }
}