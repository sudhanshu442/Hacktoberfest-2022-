#include<iostream>
using namespace std;
int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int n;
    cin>>n;
    //for loop
    // int sum=0;
    // for(int counter=1;counter<=n;counter++){
    //      sum=sum+counter;
    // }
    // cout<<sum<<endl;

    //while loop
    // while(n>0){
    //     cout<<n<<endl;
    //     cin>>n;
    // }return 0;

    //do whil loop
    // do{
    //     cout<<n<<endl;
    //     cin>>n;
    // }
    // while(n>0);

    int pM=3000;
    for(int d=1;d<=30;d++){
        if(d%2==0){
            continue;
        }
        if(pM==0){
        break;
        }
    pM-=300;
    cout<<"go"<<endl;;
    }
}