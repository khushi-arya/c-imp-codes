#include<iostream>
using namespace std;
class A{
   private:
   int l,b,h;
   public:
   void setdata(int x,int y,int z){
       l=x;
       b=y;
       h=z;
   }
   void showdata(){
       cout<<"l= "<<l<<"  b=  "<<b<<" h=  "<<h;
   }
};
int main(){
    A *p,obj;
    p=&obj;
    p->setdata(2,3,4);
    p->showdata();
    return 0;
}