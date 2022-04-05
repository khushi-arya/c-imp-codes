#include<iostream>
using namespace std;
class A{
   private:
   int l,b,h;
   public:
   void setdata(int l,int b,int h){
     this->l=l;
     this->b=b;
     this->h=h;
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