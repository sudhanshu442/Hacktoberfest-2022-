#include<iostream>
using namespace std;
int main(){
    float n1,n2;
    cin>>n1>>n2;
    char btn;
    cin>>btn;
    // switch(btn)
    // {
    //     case 'a':
    //     cout<<"hello"<<endl;
    //     break;
    //     case 'b':
    //     cout<<"helo"<<endl;
    //     break;
    //     case 'c':
    //         cout<<"ho"<<endl;
    //         break;
    //     case 'd':
    //         cout<<"heo"<<endl;
    //         break;
    //     case 'e':
    //         cout<<"helloo"<<endl;
    //         break;
    //     default :
    //         cout<<"plz learn"<<endl;
            
    // }
    switch(btn){
        case '+':
        cout<<n1+n2<<endl;
        break;
         case '-':
        cout<<n1-n2<<endl;
        break;
         case '/':
        cout<<n1/n2<<endl;
        break;
         case '*':
        cout<<n1*n2<<endl;
        break;
        default:
        cout<<"bas bohut gya tera"<<endl;
    }
    return 0;
}