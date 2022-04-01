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
        cout<<"a=  "<<a;
        cout<<"b=  "<<b;
    }
    A add(A c){
        A temp;
        temp.a=a+c.a;
        temp.b=b+c.b;
         return (temp);
    }
};
int main(){
    A c1,c2,c3;
    c1.setdata(3,6);
    c2.setdata(4,6);
    c3=c1.add(c2);
    c3.showdata();
    return 0;
}
