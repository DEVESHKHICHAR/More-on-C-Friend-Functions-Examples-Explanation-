#include <iostream>
using namespace std;
class x;
class y{
    int data;
    friend void swap(x &,y &);
    public: 
      void setdata(int a){
        data=a;
      }
      void getdata(){
         cout<<data<<endl;
      }
};
class x{
    int num;
    int temp;
    friend void swap(x &,y &);
    public: 
      void setdata(int a){
           num=a;
           temp=a;
      }
      void getdata(){
        cout<<num<<" ";
      }
};
void swap(x &o1,y &o2){
    int *p= &o1.num;
    *p=o2.data;
    int *q= &o2.data;
    *q=o1.temp;
    //cout<<o1.num<<" "<<o2.data;
}
int main() {
    x c1;
    y c2;
    c1.setdata(3);
    c1.getdata();
    c2.setdata(8);
    c2.getdata();
    swap(c1,c2);
    c1.getdata();
    c2.getdata();
       return 0;
}