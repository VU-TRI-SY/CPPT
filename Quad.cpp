#include<bits/stdc++.h>
using namespace std;
class Quad{
    protected:
        double e1;
        double e2;
        double e3;
        double e4;
    
    public:
        Quad(double e1, double e2, double e3, double e4){
            this->e1 = e1;
            this->e2 = e2;
            this->e3 = e3;
            this->e4 = e4;
        }
        //Quad Q(1,2,3,4);

        Quad(){
            this->e1 = 0.0;
            this->e2 = 0.0;
            this->e3 = 0.0;
            this->e4 = 0.0;
        } 
        //Quad Q;

        Quad(const Quad&Q){
            this->e1 = Q.e1;
            this->e2 = Q.e2;
            this->e3 = Q.e3;
            this->e4 = Q.e4;
        }
        //Quad Q1 = Q; create object Q and copy values from Q to Q1 --> copy constructor
        
        Quad& operator = (Quad&Q){
            this->e1 = Q.e1;
            this->e2 = Q.e2;
            this->e3 = Q.e3;
            this->e4 = Q.e4;
            return *this;
        }
        //Quad Q;
        //Q = Q1; = operator = is called (not copy constructor due to Q is already exists)

        void settingEdge(double e1, double e2, double e3, double e4){
            this->e1 = e1;
            this->e2 = e2;
            this->e3 = e3;
            this->e4 = e4;
        }

        virtual double area() =0; 

};

class Rectangel:public Quad{
    public:
        Rectangel(){};
        
        Rectangel(double width, double height): Quad(width, height, width, height){}

        //Rectangel(double width, double height){
            //Quad is called by defualt constructor
            //e1, e2, e3, e4 are set to 0.0
            //Quad::settingEdge(width, height, width, height);
        //}

        double area(){
            return Quad::e1 * Quad::e2;
        }
};

int main(){
    Rectangel r;
    cout << r.area() << endl;

    Rectangel rect(20.5, 10);
    cout << rect.area() << endl;
}