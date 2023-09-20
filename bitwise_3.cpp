#include <iostream>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        if(i==1){
            continue;
        }
        cout<<i<<endl;
    }
    cout<<endl<<endl;
    for(int i=0; i<5; i++){
        if(i==3){
            break;
        }
        cout<<i<<endl;
    }
    cout<<endl<<endl;
    for(int i=0; i<=5; i++){
        cout<<"hello friends "<<i<<endl;
        continue;
        cout<<"kaise ho saare"<<endl;
    }

    if(true){
        cout<<"inside if number 1"<<endl;
        int a=100;
        if(true){
            int a=200;
            cout<<"inside if number 2"<<endl;
            cout<<a<<endl;
        }
    }
    return 0;
}