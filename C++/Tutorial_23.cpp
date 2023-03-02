#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " & this is employee number " << count << endl;
        ;
    }
};

int Employee::count; //default value is 0

int main()
{
    Employee harry, rohan, harshal;
    //count is the static data member of class employee
    //harry.id =1;
    //harry.count=1; //cannot do this as id & count are private
    harry.setData();
    harry.getData();

    rohan.setData();
    rohan.getData();

    harshal.setData();
    harshal.getData();
    return 0;
}

