#include <bits/stdc++.h>
using namespace std;
struct Date
{
    int day;
    int month;
    int year;

    Date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void printDate()
    {
        cout << day << "/" << month << "/" << year << endl;
    }
};

class Work
{
    int workingTime;
    int salaryRate;

public:
    Work(int sr, int wt)
    {
        salaryRate = sr;
        workingTime = wt;
    }

    Work(int sr){
        this->salaryRate = sr;
        this->workingTime = 0;
    }

    Work(Work* v)
    {
        this->workingTime = v->workingTime;
        this->salaryRate = v->salaryRate;
    }

    void add(int time_)
    {
        workingTime += time_;
    }

    void printSalary()
    {
        // 31.250000
        printf("%.2f", (workingTime * salaryRate) / 100.0);
    }

    static void reset(Work *w)
    {
        w->workingTime = 0;
    }

    bool subtract(int t)
    {
        if (workingTime - t < 0)
        {
            return false;
        }
        else
        {
            workingTime -= t;
            return true;
        }
    }

    int compare(Work* v){
        int salary = this->salaryRate * this->workingTime;
        int salary2 = v->salaryRate * v->workingTime;
        if(salary < salary2){
            return -1;
        }else{
            if(salary > salary2 ){
                return 1;
            }else{
                return 0;
            }
        }
    }
};

int main()
{

    Work *w = new Work(25, 60);  // 25 cent/min, 60 min
    w->add(65);                  // add 65 minutes working time
    w->printSalary();            // prints salary "31,25" (25*125 Cents)
    Work::reset(w);              // reset working time to zero
    cout << endl;
    bool okay = w->subtract(60); // attempts to subtract 60 minutes
    cout << okay << endl;
    // returns false, if not sufficient time
    // available (time remains unchanged)
    Work *v = new Work(30); // 30 cent/min, 0 min
    int r = w->compare(v);  // 0 if salaries of w and v are equal,
    cout << r << endl;
    // 1, if w's salary is bigger, -1, else
    Work u(v); // u becomes a copy of v
}