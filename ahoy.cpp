#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void setRN(int);
    void getRN(void);
};
void Student ::setRN(int a)
{
    roll_number = a;
}
void Student ::getRN(void)
{
    cout << "The Roll Number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float, float);
    void getMarks(void);
};

void Exam ::setMarks(float b, float a)
{
    maths = a;
    physics = b;
}

void Exam ::getMarks(void)
{
    cout << "The marks Obtained in Physics are : " << physics << endl;
    cout << "The marks Obtained in Maths are : " << maths << endl;
}

class Result : public Exam
{
protected:
    float percentage;

public:
    void Dispaly(void)
    {
        getRN();
        getMarks();
        percentage = (physics + maths) / 2;
        cout << "Your Percentage is " << percentage <<"%"<< endl;
    }
};

//Student--->Exam----->Result are called Inheritance Path.
//Student is Base class of Exam & Exam is base class of Result.

int main()
{
    Result ayush;
    ayush.setRN(21);
    ayush.setMarks(85, 95);
    ayush.Dispaly();
    return 0;
}