#include <iostream>
using namespace std;
//Virtual Base Classes - Helps in resolving ambiguity and duplicatde inheritance in Hyprid/Virtual Inheritance
//Student -----> Test & Sports -----> Result
//Syntax -

class Student // Student is a Virtual Base Class
{
    protected:
    int roll_no;
    public:
    void setNum(int a)
    {
        roll_no  = a;
    }
    void printNu()
    {
        cout<<"The roll Number  is "<<roll_no<<endl;
    }

};

class Test : virtual public Student
{
    protected:
    float maths, physics;
    public:
    void setMarks(float a, float b)
    {
        maths = a;
        physics = b;

    }
    void getMarks(void)
    {
        cout<<"Your Result is here :"<<endl
            <<"Maths : "<<maths<<endl
            <<"Physics : "<<physics<<endl;
    }
};

class Sports : virtual public Student
{
    protected:
    float score;
    public:
    void setScore(int s)
    {
        score = s;
    }
    void getScore()
    {
        cout<<"Your score is "<<score<<endl;
    }

};

class Result : public Test, public Sports
{
    private:
    float Total;
    public:
    void Display()
    {
        Total = maths + physics + score;
        printNu();
        getMarks();
        getScore();
        cout<<"Your Total score is : "<<Total/3<<endl;
    }    
};
int main(){
    Result ayush;
    ayush.setNum(27);
    ayush.setMarks(95,85);
    ayush.setScore(75);
    ayush.Display();
    return 0;
}
