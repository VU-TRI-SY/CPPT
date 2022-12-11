#include<bits/stdc++.h>
using namespace std;
class Dog {
    const char* m_type; //cstring
    public:
        Dog(){
            m_type = nullptr;
        }
        
        Dog(const char* type) : m_type(type) {}  
        virtual void play() {
            cout << "Play like a dog" << endl;
        }
        virtual void show()const {
            cout << "Type is: " << m_type << endl;
        }
};

class ServiceDog : public Dog {
    const char* m_type;
    public:
    ServiceDog(){
        m_type = nullptr;
    }
    ServiceDog(const char* type) : m_type(type){

    }
    virtual void play() = 0; //abstract function
    void show() const {
        cout << "Type is: " << m_type << endl;
    }
};

class Snake : public Dog {
    const char* m_type;
    public:
    void show() const {
        cout << "Type is: " << m_type << endl;
    }
};

class ArmyDog : public ServiceDog {
    int m_skill_level;
public:
    ArmyDog(const char* type, int skill): ServiceDog(type), m_skill_level(skill) {}
    void play() {
        cout << "Play like pet Dog " << endl;
    }
    void show()const {
        ServiceDog::show();
        cout << "Skill level is: " << m_skill_level << endl;
    }
};