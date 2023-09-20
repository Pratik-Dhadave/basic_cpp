#include <iostream>
using namespace  std;

void one(){
    int a=5;
    ++a;
    cout<<a<<endl;
}
void two(){
    int a=5;
    cout<<"pre "<<(++a)<<endl;
}
void three(){
    int a=5;
    cout<<"post "<<(a++)<<endl;
}
void ex1(){
    int a=10;
    cout<<(--a)*10<<endl;
}
void ex2(){
    int a=10;
    cout<<(a--)*10<<endl;
}
void ex3(){
    int a=21;
    cout<<(++a)<<endl;
    cout<<(a++)<<endl;
    cout<<a<<endl;
}
void ex4(){
    int a=10;
    cout<<"ans:"<<(++a)*(a++)<<endl;
}
void ex5(){
    int a=10;
    cout<<(a++)*(++a)<<endl;
}
int main(){
    one();
    two();
    three();
    ex1();
    ex2();
    ex3();
    ex4();
    ex5();
    return 0;
}

