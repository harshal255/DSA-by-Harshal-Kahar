#include <bits/stdc++.h>
using namespace std;

class Human
{
public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : protected Human
{
public:
    string color = "Red";
    void sleep()
    {
        cout << "Male Sleeping";
    }
    int getHeight(int h)
    {
        this->height = h;
        return this->height;
    }
};

int main() 
{
    Male m1;
    cout << m1.getHeight(155) << endl;
    // cout << m1.height << endl; // can't accessible whenever child class is protected;
    // Male obj;
    // cout << obj.age << endl;
    // cout << obj.height << endl;
    // obj.setWeight(55);
    // cout << obj.weight << endl;
    // cout << obj.color << endl;
    // obj.sleep();

    return 0;
}