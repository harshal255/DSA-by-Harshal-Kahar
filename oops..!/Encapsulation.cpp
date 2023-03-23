#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int height;

public:
    int getAge()
    {
        return this->age;
    }
    string getName()
    {
        return this->name;
    }
    int getHeight()
    {
        return this->height;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setHeight(int height)
    {
        this->height = height;
    }
};

int main()
{
    Student first;
    cout << "Nothhing much " << endl;
    first.setAge(20);
    first.setHeight(175);
    first.setName("Harshal");
    cout << first.getAge() << endl;
    cout << first.getHeight() << endl;
    cout << first.getName() << endl;

    return 0;
} 