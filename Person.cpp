
#include <iostream>;
using namespace std;
class  Person
{
      int age;
public:
    Person() 
    {
    }
    
    Person(int age) 
    {
        this->age = age; //Not "." ---> "->" due to this is a pointer
    }
    Person& operator < (Person &p)
    {
        return age < p.age? p: *this; //return reference of object that has bigger age
    }
    int getAge()
    {
        return age;   
    }
};

int main() // main --> int
{
    Person P1 (15);
    Person P2 (11);
    Person P3;
    //  //if P1 is less than P2
    //   if (P1 < P2) //invalid: P1 < P2 --> return reference of Person object
 	//   cout << P2.getAge();
    //   else  
    //       cout << P1.getAge();
}