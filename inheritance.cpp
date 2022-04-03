#include<iostream>
using namespace std;
class A{
    public:
    string a="hy";
    void fun(){
        cout<<"  "<<a;
    }
};
class B:public A{
    public:
    string b="by";
    void fun1(){
        cout<<"  "<<b;
    }
};
class C:public A{
    public:
    string c="go";
    void fun2(){
        cout<<"  "<<c;
    }
};
int main(){
    B obj;
    obj.fun();
    obj.fun1();
    cout<<"\n";
    C obj2;
    obj2.fun();
    obj2.fun2();
    return 0; 
}