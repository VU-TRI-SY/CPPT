#include <iostream>
using namespace std;
class Room
{
    int width;
    int height;

public:
    /*void*/ Room() //construct has no return type
    {
        width = 1;
        height = 2;
    }
    Room(Room &r) //copy construct --> const
    {
        width = r.width;
        height = r.height;
    }
};

/*void*/ int main() //main must be int type
{
    Room objRoom1;
    Room objroom2(objRoom1);
    Room objRoom3 = objRoom1; //errr -> because has no coopy constructor
    Room objRoom4;
    objRoom4 = objRoom3;
}