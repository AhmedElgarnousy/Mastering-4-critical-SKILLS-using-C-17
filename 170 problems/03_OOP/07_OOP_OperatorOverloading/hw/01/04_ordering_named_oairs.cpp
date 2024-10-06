#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
// Homework 4: Ordering named pairs
- Define class NamedPair that inherits
    from the previous class (MyPair)
        - it has now extra param for string name
- Define Operator <
    - It should utlilize parent opertor <
    - Don't duplicate effort
- Override function print to print new variable
*/

class MyPair
{
private:
    int first;
    int second;

public:
    // Constructors
    // MyPair() {}
    MyPair(int first, int second) : first(first),
                                    second(second) {}
    virtual ~MyPair() {}
    // opertor overloading
    bool operator<(const MyPair &c2)
    {
        if (first != c2.first)
            return first < c2.first;
        return second < c2.second;
    }

    int GetFirst() const
    {
        return first;
    }
    int GetSecond() const
    {
        return second;
    }
    virtual void print()
    {
        cout << "(" << first << "," << second << ")" << "\n";
    }
};

class NamePair : public MyPair
{
private:
    string name;

public:
    NamePair(string name, int first, int second) : name(name), MyPair(first, second) {}
    virtual ~NamePair() {}
    virtual void print()
    {
        cout << "(" << name << ": " << GetFirst() << "," << GetSecond() << ")" << "\n";
    }

    bool operator<(const NamePair &c2)
    {
        NamePair &c1 = *this;
        if (c1.name == c2.name)
            return MyPair::operator<(c2);

        return c1.name < c2.name;
    }
};

void test1()
{
    vector<NamePair> vec;
    vec.push_back(NamePair("A", 10, 20));
    vec.push_back(NamePair("B", 10, 7));
    vec.push_back(NamePair("C", 1, 200));

    sort(vec.begin(), vec.end());

    for (auto &pair : vec)
        pair.print();
}
void test2()
{
    vector<NamePair *> vec;
    NamePair *ptr1 = new NamePair("A", 10, 20);
    NamePair *ptr2 = new NamePair("B", 10, 7);
    NamePair *ptr3 = new NamePair("C", 1, 200);

    vec.push_back(ptr1);
    vec.push_back(ptr2);
    vec.push_back(ptr3);

    sort(vec.begin(), vec.end());

    for (auto &pair : vec)
        pair->print();
}
void test3()
{
    vector<MyPair *> vec;
    MyPair *ptr1 = new NamePair("A", 10, 20);
    MyPair *ptr2 = new NamePair("B", 10, 7);
    MyPair *ptr3 = new NamePair("C", 1, 200);

    vec.push_back(ptr1);
    vec.push_back(ptr2);
    vec.push_back(ptr3);

    sort(vec.begin(), vec.end());

    for (auto &pair : vec)
        pair->print();
}

int main()
{
    test1();
    return 0;
}