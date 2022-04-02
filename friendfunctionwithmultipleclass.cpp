#include<iostream>
using namespace std;
class B;
class A{
    private:
    int a;
    public:
    void setdata(int x){
        a=x;
        }
    void showdata(){
        cout<<"a= "<<a;
    }
    friend void fun(A,B);
};
class B{
   private:
    int b;
    public:
    void setdata(int y){
        b=y;
        }
    void showdata(){
        cout<<"b= "<<b;
    }
    friend void fun(A,B);
};
void fun(A c1,B c2){
  cout<<"a+b=  "<<c1.a+c2.b;
}
int main(){
    A c1;
   c1.setdata(3);
   c1.showdata();
   B c2;
   c2.setdata(8);
   c2.showdata();
   cout<<"\n";
   fun(c1,c2);
   
    return 0;
}
