#include<iostream>
using namespace std;
int main(){
    // int a,b;
    // cin>>a>>b;
    //for(int n=a;n<=b;n++){
    int i,n;
    cin>>n;
    for(i=2;i<n;i++){
        if(n%i==0){
            cout<<"Non prime"<<endl;
            break;
                    }
    }
    if(n==i){
    cout<<"prime"<<endl;
    }
    //}

}