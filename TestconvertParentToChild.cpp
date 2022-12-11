#include <bits/stdc++.h>
using namespace std;
class Base
{ // abstract class --> cannot creat objects of abstract class
public:
    Base(){

    }
    Base(Base& b){
            
    }

    virtual void show()
    {
        cout << "Show from Base class" << endl;
    }

    virtual void print()
    {
        cout << "Print from Base class" << endl;
    }
};

class Derived : public Base
{ // class Derived inherits abstract Base class ==> must implement all abstract method of Base class
public:
    Derived(){

    }

    Derived(Derived& d){

    }

    // Derived(Base& d){

    // }
    void show()
    {
        cout << "Show from Derived class" << endl;
    }

    void print()
    {
        cout << "Print from Derived class" << endl;
    }
};

int main(){
    Base *b = new Base();
    // Derived  = (Derived) *b;
    // d.show();
    // d.print();
}