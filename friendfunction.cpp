#include<iostream>
using namespace std;
class A{
    private:
    int a,b;
    public:
    void setdata(int x,int y){
        a=x,b=y;
        }
    void showdata(){
        cout<<"a= "<<a;
        cout<<"  ";
        cout<<"b= "<<b;
    }
    friend void fun(A c);
};
void fun(A c){
  cout<<"a+b=  "<<c.a+c.b;
}
int main(){
    A c1;
   c1.setdata(3,4);
   c1.showdata();
   cout<<"\n";
   fun(c1);
   
    return 0;
}
