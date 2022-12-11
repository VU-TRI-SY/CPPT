#include<bits/stdc++.h>
using namespace std;
class Base{ //abstract class --> cannot creat objects of abstract class
    public:
        virtual void show() =0; //pure function --> abstract method

        virtual void print() =0; //pure function --> abstract method
};

class Derived:public Base{ //class Derived inherits abstract Base class ==> must implement all abstract method of Base class
    public:
        void show(){ 
            cout << "Show from Derived class" << endl;
        }

        void print(){
            cout << "Print from Derived class" << endl;
        }
};

int main(){
    // Base b;
    // b.show();
    // b.print();
    // Derived d;
    // d.show();
    // d.print();

    Base* b = new Derived(); //cannot create object of abstract class Base, but we can create pointer of that class
    b->print();
    b->show();
    //confused
}