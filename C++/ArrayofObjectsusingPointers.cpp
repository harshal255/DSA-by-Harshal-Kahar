#include <bits/stdc++.h>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Code of this item is " << id
             << endl;
        cout << "Price of this item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    ShopItem *pointer = new ShopItem[size];

    ShopItem *pointerTemp = pointer;
    int p, q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id & price of item " << i + 1 << endl;
        cin >> p >> q;
        pointer->setData(p, q);
        pointer++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        pointerTemp->getData();
        pointerTemp++;
    }

    return 0;
}