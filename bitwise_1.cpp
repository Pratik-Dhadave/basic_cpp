#include <iostream>
using namespace std;

int main(){
    int a=5;
    int b=10;

    cout<< (a & b) <<endl;
    cout<<(a | b) <<endl;

    int c=1;
    cout<< ~c<<endl;
    cout<< ~(c) <<endl;
    cout<< (~c) <<endl;

    cout<<"XOR"<<endl;
    int num1 =5;
    int num2 = -5;
    int num3 = 5;

    cout<<(num1^num2)<<endl;
    cout<<(num1^num3)<<endl;

    cout<<"Left Shift "<<endl;
    int A = 8;
    cout<< (A<<1) <<endl;
    cout<< (A<<3) <<endl;

    cout<<"Right Shift"<<endl;
    int B=100;
    int ans = (B >>1);
    cout<<ans<<endl;

    cout<<"let us see complier cache"<<endl;
    signed int  C=-100;
    cout<<"signed :"<<(C>>1)<<endl;

    unsigned int D=-100;
    cout<<"unsigned :"<<(D>>1)<<endl;

    int g =10;
    cout<<( g<<-1)<<endl;
    return 0;
}