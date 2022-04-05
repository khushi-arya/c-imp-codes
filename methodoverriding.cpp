#include<iostream>
using namespace std;
class A{
    public:
    void cat(){
        cout<<"milk";

    }
};
class B:public A{
    public:
    void cat(){
        cout<<"milk with bread";
    }
};
int main(){
   B obj;
   obj.cat();
   return 0;
}